import re

file1 = open('parse.gv', 'r')
file2 = open('new_parse.gv', 'x')

lines = file1.readlines()

print("hey gagan")

count = 0
# Strips the newline character
for line in lines:
    lable = re.search(r'[0-9]+\s\[label=".*?".*', line)
    if lable:
        x = re.findall(r'[0-9]+', lable.string)
        file2.write("  {} [label=\"{}\"]\n".format(x[0], x[0]))
    else:
        file2.write(line)