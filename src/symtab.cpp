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

void print_symtab(){
	cout<<"----SYMBOL TABLE----"<<endl;
	cout<<"Scope_num Sym_name"<<endl<<endl;
	for( auto i : symtab){
		cout<<i.first<<endl;
	}
}
