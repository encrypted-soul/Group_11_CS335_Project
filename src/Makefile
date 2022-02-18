
all:
	bison -d -v -Wconflicts-sr parse.y
	bison --graph parse.y
	python3 label.py
	sfdp -x -Goverlap=scale -Tpng new_parse.gv > automata.png
	flex  lex.l
	gcc -c -lfl parse.tab.c
	gcc -c -lfl lex.yy.c
	gcc parse.tab.o lex.yy.o -o parse
	rm -rf parse.gv

clean:
	rm -rf *.tab*
	rm -rf *.cc
	rm -rf *.c
	rm -rf *.o
	rm -rf *.gv
	rm -rf parse.output
	rm -rf parse
	rm -rf automata.png