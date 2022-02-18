
all:
	bison -d -v -Wconflicts-sr parse.y
	bison --graph parse.y
	# dot -Tpdf parse.dot -o parser.pdf
	flex  lex.l
	gcc -c -lfl parse.tab.c
	gcc -c -lfl lex.yy.c
	gcc parse.tab.o lex.yy.o -o parse

clean:
	rm -rf *.tab*
	rm -rf *.cc
	rm -rf *.c
	rm -rf *.o
	rm -rf parse.output
	rm -rf parse
	rm -rf parse.dot
	rm -rf parse.pdf