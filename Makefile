# Format all cpp file using clang-format before compiling
all: build

build: src/lex.l
	flex -o src/lex.yy.c src/lex.l
	gcc src/lex.yy.c -lfl -o src/lex.o
