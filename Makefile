SOURCE_DIR="./src"
TEST_DIR="./test"

all: build

build: src/lex.l 
	flex -+ -o src/lex.yy.cc src/lex.l
	g++ src/lex.yy.cc -lfl -o src/lex.o

clean:
	rm -f $(SOURCE_DIR)/*.o
	rm -rf $(TEST_DIR)/lex/output

# TODOs: 
# 1. Automate testing: write input, output and compare automatically
#                       ( ? Use github actions )
# 2. Format files: Avoids unnecessary changes. Use:
#                  a) TERMINAL: clang-format -i FILE_TO_FORMAT
#                  b) VSCODE: Install clang-format extension
#                             Configure default formatter as clang-format
#                             Ctrl + Shift + I