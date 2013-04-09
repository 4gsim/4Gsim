import re

types = ['Integer', 
			'IntegerBase',
			'BitString', 
			'BitStringBase',
			'OctetString', 
			'OctetStringBase',
			'Enumerated', 
			'EnumeratedBase',
			'Sequence', 
			'SequenceOf',
			'Choice',
			'Null',
			'Boolean']
constrainttypes = ['Integer', 
					'IntegerBase',
					'BitString', 
					'BitStringBase',
					'OctetString', 
					'OctetStringBase']

mod = ''

class ASNObject:
	type = '' 
	name = ''
	constrainttype = ''
	lowerlimit = ''
	upperlimit = ''
	value = 0
	opt = 0
	ext = 0
	objs = list()
	written = 0
	parent = None
	outfilename = ''
        includes = list()
        imports = list()

def iscomment(line):
        line = line.strip()
        line = line.strip('\t')

        if len(line) > 1:
                if line[0] == '-' and line[1] == '-':
                        return True
                else:
                        return False
        else:
                return False

def parsebracket(asnobj, string, cursor):
	objstring = ""
	i = cursor
	openbrackets = 0
	openparanthesis = 0
	objs = list()
	asnobj.constrainttype = "CONSTRAINED"
	upperlimit = 0
	ext = 0

	for i in range(0, len(string)):
		if string[i] == ',' and openbrackets == 0 and openparanthesis == 0 and len(objstring) > 0:
                        objstring = objstring.strip()
##                        print asnobj.type
##                        print objstring
                        if objstring == '...':
                                asnobj.constrainttype = "EXTCONSTRAINED"
                                objstring = ""
                                ext = 1
                        else:
                                childobj = parsestring(objstring)
                                objs.append(childobj)
                                childobj.parent = asnobj
                                objstring = ""
                                if not ext:
                                        upperlimit += 1
		else:
			if string[i] == '{':
				openbrackets += 1
			elif string[i] == '}':
				if openbrackets != 0:
					openbrackets -= 1
			elif string[i] == '(':
				openparanthesis += 1
			elif string[i] == ')':
				if openparanthesis != 0:
					openparanthesis -= 1
			objstring += string[i]
	objstring = objstring.strip()
        if objstring == '...':
		asnobj.constrainttype = "EXTCONSTRAINED"
		ext = 1
	else:
		if len(objstring) > 0:
##                        print asnobj.type
##                        print objstring
			childobj = parsestring(objstring)
			objs.append(childobj)
			childobj.parent = asnobj
			if not ext:
                                upperlimit += 1

        if asnobj.type == "Choice" or asnobj.type == "Sequence":
                asnobj.upperlimit = upperlimit
	asnobj.objs = objs

def parsesize(asnobj, string):
	count = 0
	limits = list()
	limits.append("")
	skip = 0
	begin = 0
	
	if 'CONTAINING' in string:
                asnobj.constrainttype = "UNCONSTRAINED"
                return
	
	if 'SIZE' in string:
		for i in range(0, len(string)):
			begin += 1
			if string[i] == '(':
				break
			
##	if ',' in string:
##		asnobj.constrainttype = "EXTCONSTRAINED"
##	else:
##		asnobj.constrainttype = "CONSTRAINED"

	for i in range(begin, len(string)):
		if string[i] != '.' and string[i] != ')' and string[i] != ',':
			limits[count] += string[i]
		if string[i] == '.' and skip == 0:
			count += 1
			limits.append("")
			skip = 1
		if string[i] == ')':
##                        print asnobj.type
                        asnobj.constrainttype = "CONSTRAINED"
			break
		if string[i] == ',':
                        asnobj.constrainttype = "EXTCONSTRAINED"
                        break

	if count == 0:
		limits.append(limits[count])
	if not limits[0].replace("-", "").isdigit():
		limits[0] = limits[0].replace("-", "_")
	if not limits[1].replace("-", "").isdigit():
		limits[1] = limits[1].replace("-", "_")

##        print limits
	asnobj.lowerlimit = limits[0]
	asnobj.upperlimit = limits[1]

def parsetype(asnobj, string):
	type = ""	
	localstring = ""
	if string.split()[-1] == 'OPTIONAL':
		asnobj.opt = 1
		string = string.split('OPTIONAL')[0].strip()
	if 'DEFAULT' in string:
		asnobj.opt = 1
		string = string.split('DEFAULT')[0].strip()
	if 'SIZE' in string:
                delete = 0
                for i in range(0, len(string)):
                        if string[i] == '(':
                                delete += 1
                        if delete == 0:
                                localstring += string[i]
                        if string[i] == ')':
                                delete -= 1
        else:
                localstring = string
##        print localstring
        localstring = localstring.strip()
	for i in range(0, len(localstring)):
		if localstring[i] == '(' or localstring[i] == '{' or localstring[i] == ',' or localstring[i] == ':' or localstring.find("OF") == i:
                        break
		else:
			type += localstring[i]
	type = type.strip()

	if type == 'INTEGER':
		asnobj.type = "Integer"
	elif type == 'BIT STRING':
		asnobj.type = "BitString"
	elif type == 'OCTET STRING':
		asnobj.type = "OctetString"
	elif type == 'SEQUENCE':
		if ' OF ' in localstring:
                        if localstring.find('{') == -1 or localstring.find('OF') < localstring.find('{'):
                                asnobj.type = "SequenceOf"
                        else:
                                asnobj.type = "Sequence"
		else:
			asnobj.type = "Sequence"
	elif type == 'CHOICE':
		asnobj.type = "Choice"
	elif type == 'ENUMERATED':
		asnobj.type = "Enumerated"
	elif type == 'NULL':
		asnobj.type = "Null"
	elif type == 'BOOLEAN':
		asnobj.type = "Boolean"
	else:
		asnobj.type = type.replace("-", "")

	if '::=' in localstring and localstring.index(type) < localstring.index('::='):
		asnobj.constrainttype = "CONSTANT"

##        print asnobj.type

def findfilename(string):
	filename = string
	while filename.find('-') != -1:
		pos = filename.index('-')
		first = filename.split('-')[0]
		second = filename.split('-')[1].title()
		if second.find(';') != -1:
			second = second[:-1]
		filename = first + second
	return filename
		
def parseheader(asnobj, string):
        includes = list()
        imports = list()
	filename = string.split()[0]
	asnobj.outfilename = mod + findfilename(filename)
	
	words = string.split("\n")
	for i in range(0, len(words)):
		if 'FROM' in words[i]:
			filename = words[i].split()[1]
			if ';' in filename:
                                filename = filename[:-1]
			include = mod + findfilename(filename)
			includes.append(include)
		else:
                        imp = words[i].replace("-", "").strip()
                        if ',' in imp:
                                imp = imp[:-1]
                        imports.append(imp)
                        #print imp
	asnobj.includes = includes
	asnobj.imports = imports
        

def parsestring(string):
	asnobj = ASNObject()
	words = list()
##	print string + '\n'
	if 'IMPORTS' in string or 'DEFINITIONS' in string:
		parseheader(asnobj, string)
		return asnobj
	if '::=' in string:
                while '--' in string:
                        pos = string.find('--')
                        while string[pos] != '\n':
                                string = string[:pos] + string[(pos + 1):]
		string = string.replace("\t", ' ')
		string = string.replace("\n", '')
		string = re.sub('\s+', ' ', string)
		words = string.split('::=')
		if len(words[0].split()) > 1:
			words = string.split(' ', 1)
			asnobj.name = words[0].replace("-", "_").strip()
		else:
			asnobj.name = words[0].replace("-", "").strip()
	else:
                if '[[' in string:
                        pos = string.find('[[')
                        string = string[:pos] + string[(pos + 2):]
                if ']]' in string:
                        pos = string.find(']]')
                        string = string[:pos] + string[(pos + 2):]
                string = string.strip()
		words = string.split(' ', 1)
		asnobj.name = words[0].replace("-", "_").strip()
##        print asnobj.name
##	print string + "\n"
	if len(words) > 1:
		parsetype(asnobj, words[1])
		if asnobj.type != "Enumerated" and asnobj.constrainttype != "CONSTANT":
			firstletter = asnobj.name[0]
			asnobj.name = asnobj.name[1:]
			asnobj.name = firstletter.capitalize() + asnobj.name
			asnobj.name = asnobj.name.replace("_", "")

		if asnobj.constrainttype != "CONSTANT":
			for i in range(0, len(string)):
				if string[i] == '(':
					words = words[1].split('(', 1)
					parsesize(asnobj, words[1])
					break
				elif string[i] == '{':
					if asnobj.type in constrainttypes:
                                                
						words = words[1].split('}', 1)
						words = words[1].split('(', 1)
						parsesize(asnobj, words[1])
						break
					else:
                                                if asnobj.type != "SequenceOf":
                                                        words = words[1].split('{', 1)
                                                        tmpstring = words[1].strip()
                                                        while len(tmpstring) > 0:
                                                                if tmpstring[len(tmpstring) - 1] == '}':
                                                                        tmpstring = tmpstring[:-1]
                                                                        break
                                                                tmpstring = tmpstring[:-1]
                                                        parsebracket(asnobj, tmpstring, 0)
                                                        break
				else:
					asnobj.constrainttype = "UNCONSTRAINED"

		if asnobj.type == "SequenceOf":
			objs = list()
			objstring = words[1].split(' OF ')[1]
			objstring = asnobj.name + "Item " + objstring 
                        
			obj = parsestring(objstring.strip())

			objs.append(obj)
			asnobj.objs = objs
			
		if asnobj.constrainttype == "CONSTANT":
			words = words[1].split('::=')
			words = words[1].split()
			asnobj.value = int(words[0])

                if asnobj.constrainttype == "UNCONSTRAINED" and asnobj.type in constrainttypes:
                        asnobj.type += "Base"

	return asnobj


def parsefile(directory, filename, module):
	file = open(directory + filename, "r")
	lines = file.readlines()
	file.close()
	asnobjs = list()

        global mod
	mod = module

	objectstring = ""
    
	print ("parsing file " + filename + "...")    
	for i, line in enumerate(lines):  
		if '::=' in line:
			if len(objectstring) > 0: 
				asnobjs.append(parsestring(objectstring))
			objectstring = line
		elif iscomment(line) != True and line != "\n" and line[:-1] != 'END':
			objectstring += line

	asnobjs.append(parsestring(objectstring))

	return asnobjs
