#include "symtab.h"
using namespace std;


std::ostream* fp = &cout;

int any_scope(string symname){
	if( curr_scope(symname) == FOUND ) return FOUND; 
	
	string tmp = fullscope;
	tmp = tmp.substr(0, tmp.find_last_of("/") );
	while (tmp != ""){
		if( symtab.find(tmp + " " + symname) != symtab.end() )
			return FOUND;	
		else{
			size_t pos = tmp.find_last_of("/");
			if(pos == string::npos) break;
			tmp = tmp.substr(0, pos);
			//cout<<tmp<<endl;	
		}
	}
	return NOTFOUND;
}

int curr_scope(string symname){
	if( symtab.find(fullscope + " " + symname) != symtab.end() )
		return FOUND;		
	
	return NOTFOUND;			
}

bool symadd(string symname, Type* symtype = NULL){
	//check new sym
	if( curr_scope(symname) == FOUND ){
		cout<< "ERROR: Repeat entry symbol table -"<<symname<<endl;
		return false;
	}
	string scoped_name = fullscope + " " + symname;
	symtab[scoped_name] = symtype;
	return true;
}


void print_symtab( ostream& symbolTable =  *fp ){
	symbolTable <<"----SYMBOL TABLE----"<<endl;
	symbolTable <<"Scope_num Sym_name"<<endl;
	for( auto i : symtab){
		symbolTable <<i.first<<endl;
	}
	symbolTable <<"----DONE----"<<endl;
}
