#include "symtab.h"
#include "type.h"
using namespace std;

int symadd(string symname, Type* symtype){
	//check new sym
	if( symtab.find(symname) != symtab.end() ){
		cout<< "ERROR: Repeat entry symbol table -"<<symname<<endl;
		return -1;
	}
	symtab[symname] = symtype;
	return 0;
}

void print_symtab(ofstream& symbolTable){
	symbolTable <<"----SYMBOL TABLE----"<<endl;
	symbolTable <<"Scope_num Sym_name"<<endl<<endl;
	for( auto i : symtab){
		symbolTable <<i.first<<endl;
	}
	symbolTable <<"----DONE----"<<endl;
}
