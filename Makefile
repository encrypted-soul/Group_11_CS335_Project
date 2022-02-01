# Format all cpp file using clang-format before compiling
all: build

buildc: src/lex_c.l
	flex -o src/lex.yy.c src/lex_c.l
	gcc src/lex.yy.c -lfl -o src/lex_c.o

build: src/lex.l 
	flex -+ -o src/lex.yy.cc src/lex.l
	g++ src/lex.yy.cc -lfl -o src/lex.o
