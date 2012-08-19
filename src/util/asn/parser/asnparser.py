import re
from optparse import OptionParser

openbracket = '{'
closedbracket = '}'
assign = '::='
integertxt = 'INTEGER'
bitstringtxt = 'BIT STRING'
octetstringtxt = 'OCTET STRING'
sequencetxt = 'SEQUENCE'
choicetxt = 'CHOICE'
enumeratedtxt = 'ENUMERATED'
nulltxt = 'NULL'
booleantxt = 'BOOLEAN'
asnobjs = list()
openparantheses = '('
closedparantheses = ')'
importstxt = 'IMPORTS'
optionaltxt = 'OPTIONAL'
defaulttxt = 'DEFAULT'
endtxt = 'END'
oftxt = ' OF '
size = 'SIZE'
definitionstxt = 'DEFINITIONS'
fromtxt = 'FROM'
comment = '--'
comma = ','
colon = ':'
tripledash = '...'
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
					'OctetStringBase',
					'Enumerated', 
					'EnumeratedBase']
module = "RRC"
outfilename = ''
includes = list()

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

def parsebracket(asnobj, string, cursor):
	#print string
	objstring = ""
	i = cursor
	openbrackets = 0
	objs = list()
	for i in range(0, len(string)):
		if string[i] == comma and openbrackets == 0 and len(objstring) > 0:
			childobj = parsestring(objstring.strip())
			objs.append(childobj)
			childobj.parent = asnobj
			objstring = ""
		else:
			if string[i] == openbracket:
				openbrackets += 1
			elif string[i] == closedbracket:
				if openbrackets != 0:
					openbrackets -= 1
			objstring += string[i]
	if tripledash in objstring:
		asnobj.constrainttype = "EXTCONSTRAINED"
	else:
		if len(objstring) > 0:
			childobj = parsestring(objstring.strip())
			objs.append(childobj)
			childobj.parent = asnobj
			asnobj.constrainttype = "CONSTRAINED"
	asnobj.objs = objs
		
def parsesize(asnobj, string):
	count = 0
	limits = list()
	limits.append("")
	skip = 0
	begin = 0
	if size in string:
		for i in range(0, len(string)):
			begin += 1
			if string[i] == '(':
				break
			
	if comma in string:
		asnobj.constrainttype = "EXTCONSTRAINED"
	else:
		asnobj.constrainttype = "CONSTRAINED"

	for i in range(begin, len(string)):
		if string[i] != '.' and string[i] != ')':
			limits[count] += string[i]
		if string[i] == '.' and skip == 0:
			count += 1
			limits.append("")
			skip = 1
		if string[i] == ')':
			break

	if count == 0:
		limits.append(limits[count])
	if not limits[0].replace("-", "").isdigit():
		limits[0] = limits[0].replace("-", "_")
	if not limits[1].replace("-", "").isdigit():
		limits[1] = limits[1].replace("-", "_")

	asnobj.lowerlimit = limits[0]
	asnobj.upperlimit = limits[1]

def parsetype(asnobj, string):
	type = ""	
	
	if string.split()[-1] == optionaltxt:
		asnobj.opt = 1
		string = string.split(optionaltxt)[0].strip()
	if defaulttxt in string:
		asnobj.opt = 1
		string = string.split(defaulttxt)[0].strip()

	for i in range(0, len(string)):
		if string[i] == openparantheses or string[i] == openbracket or string[i] == comma or string[i] == colon:
			break
		else:
			type += string[i]
	type = type.strip()
	
	if type == integertxt:
		asnobj.type = "Integer"
	elif type == bitstringtxt:
		asnobj.type = "BitString"
	elif type == octetstringtxt:
		asnobj.type = "OctetString"
	elif type == sequencetxt:
		if oftxt in string and openbracket not in string:
			asnobj.type = "SequenceOf"
		else:
			asnobj.type = "Sequence"
	elif type == choicetxt:
		asnobj.type = "Choice"
	elif type == enumeratedtxt:
		asnobj.type = "Enumerated"
	elif type == nulltxt:
		asnobj.type = "Null"
	elif type == booleantxt:
		asnobj.type = "Boolean"
	else:
		asnobj.type = type.replace("-", "")

	if assign in string and string.index(type) < string.index(assign):
		asnobj.constrainttype = "CONSTANT"
		
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
		
def parseheader(string):
	filename = string.split()[0]
	global outfilename
	outfilename = module + findfilename(filename)
	words = string.split("\n")
	for i in range(0, len(words)):
		if fromtxt in words[i]:
			filename = words[i].split()[1]
			include = module + findfilename(filename)
			includes.append(include)
	
def parsestring(string):
	asnobj = ASNObject()
	words = list()
	
	if importstxt in string or definitionstxt in string:
		parseheader(string)
		return asnobj
	if assign in string:
		string = string.replace("\t", ' ')
		string = string.replace("\n", '')
		string = re.sub('\s+', ' ', string)
		words = string.split(assign)
		if len(words[0].split()) > 1:
			words = string.split(' ', 1)
			asnobj.name = words[0].replace("-", "_").strip()
		else:
			asnobj.name = words[0].replace("-", "").strip()
	else:
		words = string.split(' ', 1)
		asnobj.name = words[0].replace("-", "_").strip()
	
	if len(words) > 1:
		parsetype(asnobj, words[1])
		if asnobj.type != "Enumerated" and asnobj.constrainttype != "CONSTANT":
			firstletter = asnobj.name[0]
			asnobj.name = asnobj.name[1:]
			asnobj.name = firstletter.capitalize() + asnobj.name
			asnobj.name = asnobj.name.replace("_", "")

		if asnobj.constrainttype != "CONSTANT":
			for i in range(0, len(string)):
				if string[i] == openparantheses:
					words = words[1].split(openparantheses, 1)
					parsesize(asnobj, words[1])
					break
				elif string[i] == openbracket:
					if asnobj.type in constrainttypes:
						words = words[1].split(closedbracket, 1)
						words = words[1].split(openparantheses, 1)
						parsesize(asnobj, words[1])
						break
					else:
						words = words[1].split(openbracket, 1)
						tmpstring = words[1].strip()
						while len(tmpstring) > 0:
							if tmpstring[len(tmpstring) - 1] == closedbracket:
								tmpstring = tmpstring[:-1]
								break
							tmpstring = tmpstring[:-1]
						parsebracket(asnobj, tmpstring, 0)
						break
				else:
					asnobj.constrainttype = "UNCONSTRAINED"

		if asnobj.type == "SequenceOf":
			objs = list()

			objstring = words[1].split(oftxt)[1]
			objstring = asnobj.name + "Item " + objstring 

			obj = parsestring(objstring.strip())

			objs.append(obj)
			asnobj.objs = objs
			
		if asnobj.constrainttype == "CONSTANT":
			words = words[1].split(assign)
			words = words[1].split()
			asnobj.value = int(words[0])
	return asnobj
	
def printobjects(asnobjs):
	for i in range(0, len(asnobjs)):
		asnobj = asnobjs[i]
		print (asnobj.type + " - " + asnobj.name)
		if asnobj.lowerlimit != '':
			print ("<" + asnobj.constrainttype + ", " + asnobj.lowerlimit + ", " + asnobj.upperlimit + ">")
		#for j in range (0, len(asnobj.objs)):
		#	print asnobj.objs[j]	
		if len(asnobj.objs) > 0:
			print ("children s")
			printobjects(asnobj.objs)
			print ("children e")

def checkandhandledeps(asnobj, hdrfile, srcfile):
	retval = 0
	for i in range(0, len(asnobj.objs)):
		obj = asnobj.objs[i]
		if obj.type in types:
			writeobject(obj, hdrfile, srcfile)
		else:
			found = 0
			for j in range(0, len(asnobjs)):
				if obj.type == asnobjs[j].name:
					writeobject(asnobjs[j], hdrfile, srcfile)
					found = 1
					break
			if not found:
				print ("Warning: Unknown ASN.1 object type " + obj.type + ". Skipping " + asnobj.name + ".\n")
				retval = -1
	return retval	
			
def writeobject(asnobj, hdrfile, srcfile):
	if asnobj.written == 0 and asnobj.name != '':
		if asnobj.parent != None:
			asnobj.name = asnobj.parent.name + asnobj.name 
		
		# Null and Boolean
		
		if asnobj.type == "Null" or asnobj.type == "Boolean":
			hdrfile.write("typedef " + asnobj.type + " " + asnobj.name + ";\n")
			asnobj.type = asnobj.name
	
		# Constraint types
		if asnobj.type in constrainttypes:
			if asnobj.constrainttype == "CONSTANT":
				hdrfile.write("#define " + asnobj.name + " " + str(asnobj.value) + "\n")
			if asnobj.constrainttype == "UNCONSTRAINED":
				hdrfile.write("typedef " + asnobj.type + " " + asnobj.name + ";\n")
			else:
				hdrfile.write("typedef " + asnobj.type + "<" + asnobj.constrainttype)
				if asnobj.lowerlimit != '':
					hdrfile.write(", " + asnobj.lowerlimit)
				if asnobj.upperlimit != '':
					hdrfile.write(", " + asnobj.upperlimit)
				hdrfile.write("> " + asnobj.name + ";\n")
				asnobj.type = asnobj.name
		
		# Enumerated
		
		if asnobj.type == "Enumerated":
			asnobj.type = asnobj.name
			hdrfile.write("enum " + asnobj.name + "Values {\n")
			for j in range(0, len(asnobj.objs)):
				childobj = asnobj.objs[j]
				hdrfile.write("\t" + childobj.name + "_" + asnobj.name + " = " + str(j) + ",\n")
			hdrfile.write("};\n")
			hdrfile.write("typedef Enumerated<" + asnobj.constrainttype + ", " + str(len(asnobj.objs) - 1) + "> " + asnobj.name + ";\n")
		
		# Sequence
		
		if asnobj.type == "Sequence":
			optnr = 0
			extnr = 0
			asnobj.type = asnobj.name
			if checkandhandledeps(asnobj, hdrfile, srcfile) != 0:
				return
			hdrfile.write("class " + asnobj.name + " : Sequence {\n" +
						"private:\n" +
						"\tstatic const void *itemsInfo[" + str(len(asnobj.objs)) + "];\n" +
						"\tstatic bool itemsPres[" + str(len(asnobj.objs)) + "];\n" +
						"public:\n" +
						"\tstatic const Info theInfo;\n"
						"\t" + asnobj.name + "(): Sequence(&theInfo) {}\n")
			hdrfile.write("};\n")
			srcfile.write("const void *" + asnobj.name + "::itemsInfo[" + str(len(asnobj.objs)) + "] = {\n")
			for j in range(0, len(asnobj.objs)):
				obj = asnobj.objs[j]
				srcfile.write("\t&" + obj.type + "::theInfo,\n")
			srcfile.write("};\n")
			srcfile.write("bool " + asnobj.name + "::itemsPres[" + str(len(asnobj.objs)) + "] = {\n")
			for j in range(0, len(asnobj.objs)):
				obj = asnobj.objs[j]
				if obj.opt == 0:
					srcfile.write("\t1,\n")
				else:
					srcfile.write("\t0,\n")
					optnr += 1
			srcfile.write("};\n")
			srcfile.write("const " + asnobj.name + "::Info " + asnobj.name + "::theInfo = {\n" +
						"\t" + asnobj.name + "::create,\n" +
						"\tSEQUENCE,\n" +
						"\t0,\n")
			if asnobj.constrainttype == "EXTCONSTRAINED":
				srcfile.write("\ttrue,\n")
			else:
				srcfile.write("\tfalse,\n")
			srcfile.write("\titemsInfo,\n" +
						"\titemsPres,\n"
						"\t" + str(len(asnobj.objs)) + ", " + str(optnr) + ", " + str(extnr) + "\n" +
						"};\n")
			srcfile.write("\n")
			
		# Sequence Of
		
		if asnobj.type == "SequenceOf":
			asnobj.type = asnobj.name
			if checkandhandledeps(asnobj, hdrfile, srcfile) != 0:
				return
			hdrfile.write("typedef SequenceOf<" + asnobj.objs[0].type + ", " + asnobj.constrainttype + ", " + asnobj.lowerlimit + ", " + asnobj.upperlimit + "> " + asnobj.name + ";\n")
			
		# Choice
		
		if asnobj.type == "Choice":
			asnobj.type = asnobj.name
			if checkandhandledeps(asnobj, hdrfile, srcfile) != 0:
				return
			hdrfile.write("class " + asnobj.name + " : Choice {\n" +
						"private:\n" +
						"\tstatic const void *choicesInfo[" + str(len(asnobj.objs)) + "];\n" +
						"public:\n" +
						"\tstatic const Info theInfo;\n"
						"\t" + asnobj.name + "(): Choice(&theInfo) {}\n")
			hdrfile.write("};\n")
			srcfile.write("const void *" + asnobj.name + "::choicesInfo[" + str(len(asnobj.objs)) + "] = {\n")
			for j in range(0, len(asnobj.objs)):
				obj = asnobj.objs[j]
				srcfile.write("\t&" + obj.type + "::theInfo,\n")
			srcfile.write("};\n")
			srcfile.write("const " + asnobj.name + "::Info " + asnobj.name + "::theInfo = {\n" +
						"\t" + asnobj.name + "::create,\n" +
						"\tCHOICE,\n" +
						"\t0,\n")
			if asnobj.constrainttype == "EXTCONSTRAINED":
				srcfile.write("\ttrue,\n")
			else:
				srcfile.write("\tfalse,\n")
			srcfile.write("\tchoicesInfo,\n" +
						"\t" + str(len(asnobj.objs) - 1) + "\n" +
						"};\n")
			srcfile.write("\n")
			
		if asnobj.type not in types:
			obj = ASNObject()
			obj.type = asnobj.type
			asnobj.objs.append(obj)
			if checkandhandledeps(asnobj, hdrfile, srcfile) != 0:
				return
			hdrfile.write("typedef " + asnobj.type + " " + asnobj.name + ";\n")
			
		hdrfile.write("\n")

		asnobj.written = 1

def writeheader(file):
	file.write("//\n" +
		"// Copyright (C) 2012 Calin Cerchez\n" +
		"//\n" +
		"// This program is free software: you can redistribute it and/or modify\n" +
		"// it under the terms of the GNU Lesser General Public License as published by\n" +
		"// the Free Software Foundation, either version 3 of the License, or\n" +
		"// (at your option) any later version.\n" +
		"//\n" + 
		"// This program is distributed in the hope that it will be useful,\n" +
		"// but WITHOUT ANY WARRANTY; without even the implied warranty of\n" +
		"// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n" +
		"// GNU Lesser General Public License for more details.\n" +
		"//\n" + 
		"// You should have received a copy of the GNU Lesser General Public License\n" +
		"// along with this program.  If not, see http://www.gnu.org/licenses/.\n" +
		"//\n\n") 

def main():
	usage = "usage: %prog [options] input filename"
	parser = OptionParser(usage)
	parser.add_option("-o", "--output", dest="filename",
		          help="name of output file", metavar="FILENAME")

	(options, args) = parser.parse_args()
	
	#directory = "/root/Desktop/omnetpp-4.2.2/samples/4Gsim/src/linklayer/lte/rrc/message/"
	directory = "F:\\omnetpp-4.2.2\\samples\\4Gsim\\src\\linklayer\\lte\\rrc\\message\\"
	filename = "test"
	
	file = open(directory + filename + ".asn", "r")
	lines = file.readlines()
	file.close()

	objectstring = ""
    
	print ("parsing file...")    
	for i, line in enumerate(lines):  
		if assign in line:
			if len(objectstring) > 0: 
				asnobjs.append(parsestring(objectstring))
			objectstring = line
		elif comment not in line and line != "\n" and line[:-1] != endtxt:
			objectstring += line

	asnobjs.append(parsestring(objectstring))

	#printobjects(asnobjs)
	print ("writing source files...")
	hdrfile = open(directory + outfilename + ".h", 'w')
	srcfile = open(directory + outfilename + ".cc", 'w')
	writeheader(hdrfile)
	writeheader(srcfile)

	hdrfile.write("#ifndef " + outfilename.upper() + "_H_\n" +
			"#define " + outfilename.upper() + "_H_\n\n" +
			"#include \"ASNTypes.h\"\n")
	for i in range(0, len(includes)):
		hdrfile.write("#include \"" + includes[i] + ".h\"\n")
	hdrfile.write("\n")

	srcfile.write("#include \"" + outfilename + ".h\"\n\n")

	for i in range (0, len(asnobjs)):
		asnobj = asnobjs[i]
		writeobject(asnobj, hdrfile, srcfile)

	hdrfile.write("#endif /* " + outfilename.upper() + "_H_ */\n")

	srcfile.close()
	hdrfile.close()
	
if __name__ == "__main__":
	main()
