
all:
	bison -d -v parse.ypp
	flex -+ lex.l
	g++ -c -lfl parse.tab.cpp
	g++ -c -lfl lex.yy.cc
	g++ parse.tab.o lex.yy.o -o parse

clean:
	rm -rf *.tab.cpp
	rm -rf *.tab.hpp
	rm -rf *.cc
	rm -rf *.o
	rm -r parse.output