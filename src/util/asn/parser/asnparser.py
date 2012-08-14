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
openparanthesis = '('
closedparanthesis = ')'
importstxt = 'IMPORTS'
optionaltxt = 'OPTIONAL'
defaulttxt = 'DEFAULT'
endtxt = 'END'
oftxt = ' OF '
size = 'SIZE'
comment = '--'
comma = ','
tripledash = '...'
typeslist = ['Integer', 
			'BitString', 
			'OctetString', 
			'Enumerated', 
			'Sequence', 
			'SequenceOf',
			'Choice',
			'_Null',
			'Boolean']

class ASNObject:
	type = '' 
	name = ''
	constrainttype = ''
	lowerlimit = ''
	upperlimit = ''
	opt = 0
	ext = 0
	objs = list()
	written = 0

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
		if string[i] == openparanthesis or string[i] == openbracket or string[i] == comma:
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
		asnobj.type = "_Null"
	elif type == booleantxt:
		asnobj.type = "Boolean"
	else:
		asnobj.type = type.replace("-", "")

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
	
	
	if len(words) > 1:
		parsetype(asnobj, words[1])
		if asnobj.type != "Enumerated":
			firstletter = asnobj.name[0]
			asnobj.name = asnobj.name[1:]
			asnobj.name = firstletter.capitalize() + asnobj.name
		for i in range(0, len(string)):
			if string[i] == openparanthesis:
				words = words[1].split(openparanthesis, 1)
				parsesize(asnobj, words[1])
				break
			elif string[i] == openbracket:
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
		if obj.type in typeslist:
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
	if asnobj.written == 0:
	
		# Null and Boolean
		
		if asnobj.type == "_Null" or asnobj.type == "Boolean":
			hdrfile.write("typedef " + asnobj.type + " " + asnobj.name + ";\n")
			asnobj.type = asnobj.name
	
		# Constraint types
	
		if asnobj.type == "Integer" or asnobj.type == "BitString" or asnobj.type == "OctetString":
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
				hdrfile.write("\t" + childobj.name + " = " + str(j) + ",\n")
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
			srcfile.write("const void *" + asnobj.name + "::itemsPres[" + str(len(asnobj.objs)) + "] = {\n")
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
						"\t" + asnobj.name + "(): Choices(&theInfo) {}\n")
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
			
		hdrfile.write("\n")
		srcfile.write("\n")
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
	
	directory = "/root/Desktop/omnetpp-4.2.2/samples/4Gsim/src/linklayer/lte/rrc/message/"
	filename = "RRCIe"
	
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
	hdrfile = open(directory + filename + ".h", 'w')
	srcfile = open(directory + filename + ".cc", 'w')
	writeheader(hdrfile)
	writeheader(srcfile)

	hdrfile.write("#ifndef " + filename.upper() + "_H_\n" +
			"#define " + filename.upper() + "_H_\n\n" +
			"#include \"ASNTypes.h\"\n\n")

	srcfile.write("#include \"" + filename + ".h\"\n\n")

	for i in range (0, len(asnobjs)):
		asnobj = asnobjs[i]
		writeobject(asnobj, hdrfile, srcfile)

	hdrfile.write("#endif /* " + filename.upper() + "_H_ */\n")

	srcfile.close()
	hdrfile.close()
	
if __name__ == "__main__":
	main()
