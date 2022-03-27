all:
	bison -d src/parser.ypp
	bison --graph src/parser.ypp
	flex src/lex.l
	mkdir -p bin
	g++ -std=c++17 src/data.cpp src/type.cpp src/ast.cpp lex.yy.c parser.tab.cpp -o bin/parser
	chmod +x bin/parser

generate_graph:
	python3 src/label.py
	sfdp -x -Goverlap=scale -Tpng new_parser.gv > automata.png

test_go:
	./bin/parser < ./test/parser_test_file/test1.go
	./bin/parser < ./test/parser_test_file/test2.go
	./bin/parser < ./test/parser_test_file/test3.go
	./bin/parser < ./test/parser_test_file/test4.go
	./bin/parser < ./test/parser_test_file/test5.go

clean_graph:
	rm automata.png

clean:
	rm -f lex.yy.c
	rm -f parser.tab.cpp
	rm -f parser.tab.hpp
	rm -f bin/parser
	rm -f new_parser.gv
	rm -f parser.gv
	rm -f parser.dot
	rm -f automata.png
