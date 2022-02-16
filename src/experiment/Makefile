
all:
	bison -d -v parse.y
	bison --graph parse.y -o parse.dot
	dot -Tpdf parse.dot -o parser.pdf
	flex  lex_c.l
	gcc -c -lfl parse.tab.c
	gcc -c -lfl lex.yy.c
	gcc parse.tab.o lex.yy.o -o parse

clean:
	rm -rf *.tab*
	rm -rf *.cc
	rm -rf *.o
	rm -rf parse.output