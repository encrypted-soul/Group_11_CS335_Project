all:
	bison -d src/parser.ypp
	bison --graph src/parser.ypp
	flex src/lex.l
	mkdir -p bin
	g++ -std=c++17 src/data.cpp src/type.cpp src/ast.cpp lex.yy.c parser.tab.cpp src/symtab.h src/symtab.cpp -o bin/3ac
	g++ -std=c++11 -c src/translate.cpp
	g++ -std=c++11 -c src/tac.cpp
	g++ -o bin/codegen translate.o tac.o
	rm -f translate.o
	rm -f tac.o
	chmod +x bin/3ac
	chmod +x bin/codegen

generate_parser:
	python3 src/label.py
	# sfdp -x -Goverlap=scale -Tpng new_parser.gv > automata.png

generate_ast:
	dot -Tpng ast.dot -o ast.png

test_go:
	./bin/3ac 1 < ./test/final_test/test1.go
	./bin/3ac 2 < ./test/final_test/test2.go
	./bin/3ac 3 < ./test/final_test/test3.go
	./bin/3ac 4 < ./test/final_test/test4.go

assemble:
	./bin/codegen test$(num).ir  > test$(num).s

run:
	spim -file test$(num).s

test_one:
	./bin/parser $(num) < ./test/parser_test_file/test$(num).go

clean_graph:
	rm automata.png

clean:
	rm -f lex.yy.c
	rm -f parser.tab.cpp
	rm -f parser.tab.hpp
	rm -f bin/3ac
	rm -f new_parser.gv
	rm -f parser.gv
	rm -f parser.dot
	rm -f automata.png
	rm -f ast*.dot
	rm -f ast*.gv
	rm -f ast*.png
	rm -f symbolTable*.txt
	rm -f test*.s
	rm -f test*.ir
