#include "symtab.h"
using namespace std;


std::ostream* fp = &cout;

symtab_t* init_symtab_top(){
	symtab_t *temp = new symtab_t;
	(*temp)["true"] =  new Type();
	symtab_top["u"] = temp;
	
	temp = new symtab_t;
	symtab_top["0"] = temp;
	return temp;
}

Type* symtype(string symname){
	// WIP returns type of symname
	string atscope = fullscope;
	string scoped_name = atscope + " " + symname;
	
	while( atscope!="0" ){
		auto symitr = symtab->find(scoped_name); 
		
		if( symitr != symtab->end() ) 
			return symitr->second;
		else{
			size_t pos = atscope.find_last_of("/");
			if(pos == string::npos) break;
			atscope = atscope.substr(0, pos);
		}
	}
	
	auto symitr = symtab_top["0"]->find(scoped_name); 
	if( symitr != symtab->end() ){
		return symitr->second;  
	}

	symitr = symtab_top["u"]->find(scoped_name);
	if( symitr != symtab->end() ){
		return symitr->second;  
	}	
	
	return NULL;
}

int any_scope(string symname){

	if( curr_scope(symname) == FOUND ) return FOUND; 
			
	string tmp = fullscope;
	string scoped_name = tmp + " " + symname;
	tmp = tmp.substr(0, tmp.find_last_of("/") );
	while (tmp != "0" ){
		if( symtab->find(tmp + " " + symname) != symtab->end() )
			return FOUND;	
		else{
			size_t pos = tmp.find_last_of("/");
			if(pos == string::npos) break;
			tmp = tmp.substr(0, pos);
		}
	}
	
	scoped_name = "0 " + symname;
	auto symitr =  (symtab_top["0"]) ->find(scoped_name); 
	if( symitr != symtab->end() ){
		return FOUND;  
	}
	
	scoped_name = "u " + symname;
	symitr = (symtab_top["u"]) ->find(scoped_name);
	if( symitr != symtab->end() ){
		return FOUND;  
	}	
	
	return NOTFOUND;
}

int curr_scope(string symname){
	if( symtab->find(fullscope + " " + symname) != symtab->end() )
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
	(*symtab)[scoped_name] = symtype;
	return true;
}

int symadd_list(astnode* node, Type* symtype, int token_name){ 
	//list-like astnode such as identifierlist, token_name = IDENITIFER or ... 
	//returns num of ele added to symtab, on error returns -(num  of ele added)
	
	if( node->children.empty() ){
		if( symadd(node->data->v_str, symtype) )
			return 1;
		else
			return 0;
	}
	int count=0;
	for( auto i : node->children ){
		if( i->id == to_string(token_name)){
			if( ! symadd( i->data->v_str, symtype) ) return -count;
			count++;
		}
		else{
			astnode* currnode = &(*i);
			count += symadd_list(currnode, symtype, token_name);  
		}
	}
	return count;	
}

void print_symtab( ostream& symbolTable /* =  *fp */ ){
	string curr_fcn_scope = "";
	for( auto i : symtab_top ){
		if( symtab == i.second ){
			curr_fcn_scope = i.first;
			break;
		}
	}
	symbolTable <<"----Symbtab for scope"<< curr_fcn_scope <<"----"<<endl;
	symbolTable <<"Scope_num Sym_name"<<endl;
	for( auto i=symtab->begin(); i != symtab->end(); i++ ){
		symbolTable <<i->first<<endl;
	}
	symbolTable <<"----DONE----"<<endl;
}
