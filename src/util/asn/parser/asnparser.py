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
asnobjs = list()
openparanthesis = '('
closedparanthesis = ')'
importstxt = 'IMPORTS'
size = "SIZE"
comment = "-- "
comma = ','
tripledash = "..."

class ASNObject:
        type = '' 
        name = ''
	constrainttype = ''
	lowerlimit = ''
	upperlimit = ''
	objs = list()
	written = 0

def parsebracket(asnobj, string, cursor):
	#print string
	objstring = ""
    	i = cursor
	openbrackets = 0
	objs = list()
	for i in range(0, len(string)):
		if string[i] == comma and openbrackets == 0:
			childobj = parsestring(objstring.strip())
			objs.append(childobj)
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
		childobj = parsestring(objstring.strip())
		objs.append(childobj)
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
	for i in range(0, len(string)):
		if string[i] == openparanthesis or string[i] == openbracket:
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
		asnobj.type = "Sequence"
	elif type == choicetxt:
		asnobj.type = "Choice"
	elif type == enumeratedtxt:
		asnobj.type = "Enumerated"

def parsestring(string):
	asnobj = ASNObject()
	words = list()

	if importstxt in string:
		return asnobj
	
	if assign in string:
		string = string.replace("\t", ' ')
		string = string.replace("\n", '')
		string = re.sub('\s+', ' ', string)
		words = string.split(assign)
		asnobj.name = words[0].replace("-", "").strip()
	else:
		words = string.split(' ', 1)
		asnobj.name = words[0].replace("-", "_").strip()
	
	#print string
	if len(words) > 1:
		parsetype(asnobj, words[1])
		for i in range(0, len(string)):
			if string[i] == openparanthesis:
				words = words[1].split(openparanthesis, 1)
				parsesize(asnobj, words[1])
				break
			elif string[i] == openbracket:
				words = words[1].split(openbracket, 1)
				words[1] = words[1].strip()[:-1]
				parsebracket(asnobj, words[1], 0)
				break
			else:
				asnobj.constrainttype = "UNCONSTRAINED"

	
	return asnobj
	
def printobjects(asnobjs):
	for i in range(0, len(asnobjs)):
                asnobj = asnobjs[i]
                print asnobj.type + " - " + asnobj.name
           	if asnobj.lowerlimit != '':
			print "<" + asnobj.constrainttype + ", " + asnobj.lowerlimit + ", " + asnobj.upperlimit + ">"
		#for j in range (0, len(asnobj.objs)):
		#	print asnobj.objs[j]	
		if len(asnobj.objs) > 0:
			print "children s"
			printobjects(asnobj.objs)
			print "children e"

def writeobjects(filename):
	file = open(filename, 'w')

	for i in range (0, len(asnobjs)):
		asnobj = asnobjs[i]
		if asnobj.type == "Integer" or asnobj.type == "BitString" or asnobj.type == "OctetString":
			file.write("typedef " + asnobj.type + "<" + asnobj.constrainttype)
			if asnobj.lowerlimit != '':
				file.write(", " + asnobj.lowerlimit)
			if asnobj.upperlimit != '':
				file.write(", " + asnobj.upperlimit)
			file.write("> " + asnobj.name + ";\n")
		if asnobj.type == "Enumerated":
			file.write("enum " + asnobj.name + "Values {\n")
			for j in range(0, len(asnobj.objs)):
				childobj = asnobj.objs[j]
				file.write("\t" + childobj.name + " = " + str(j) + ",\n")
			file.write("};\n")
			file.write("typedef " + asnobj.type + "<" + asnobj.constrainttype + ", " + str(len(asnobj.objs) - 1) + "> " + asnobj.name + ";\n")
		file.write("\n")
	file.close()

def main():
	usage = "usage: %prog [options] input filename"
	parser = OptionParser(usage)
	parser.add_option("-o", "--output", dest="filename",
		          help="name of output file", metavar="FILENAME")

	(options, args) = parser.parse_args()

	file = open("/root/workspace/ASNParser/src/rrc_ie_def.asn", "r")
	lines = file.readlines()
	file.close()

	objectstring = ""
    
        print "parsing file..."    
	for i, line in enumerate(lines):  
                if assign in line:
			if len(objectstring) > 0: 
				asnobjs.append(parsestring(objectstring))
                        objectstring = line
                elif comment not in line and line != "\n":
                        objectstring += line

	asnobjs.append(parsestring(objectstring))

	#printobjects(asnobjs)
	print "writing source files..."
	writeobjects('/root/workspace/ASNParser/src/rrc_ie_def.h')
if __name__ == "__main__":
	main()
