
all:
	bison -d -v calc.y
	flex calc.l
	gcc -c -lfl calc.tab.c
	gcc -c -lfl lex.yy.c
	gcc calc.tab.o lex.yy.o -o calc

