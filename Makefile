all:
	bison -d src/parser.y
	bison --graph src/parser.y
	python3 src/label.py
	# sfdp -x -Goverlap=scale -Tpng new_parser.gv > automata.png
	flex src/lex.l
	g++ lex.yy.c parser.tab.c -o bin/parser
	chmod +x bin/parser

test_go:
	./bin/parser < ./test/parser_test_file/test1.go
	./bin/parser < ./test/parser_test_file/test2.go
	./bin/parser < ./test/parser_test_file/test3.go
	./bin/parser < ./test/parser_test_file/test4.go
	./bin/parser < ./test/parser_test_file/test5.go

# for running all the commands ignoring the errors use `make clean -i`
clean:
	rm lex.yy.c
	rm parser.tab.c
	rm parser.tab.h
	rm bin/parser
	rm new_parser.gv
	rm parser.gv
	rm automata.png