all:
	bison -d src/parser.y
	bison --graph src/parser.y
	flex src/lex.l
	mkdir -p bin
	g++ lex.yy.c parser.tab.c -o bin/parser
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

# for running all the commands ignoring the errors use `make clean -i`
clean:
	rm lex.yy.c
	rm parser.tab.c
	rm parser.tab.h
	rm bin/parser
	rm new_parser.gv
	rm parser.gv
	rm automata.png