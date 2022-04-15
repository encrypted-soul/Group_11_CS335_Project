#ifndef SYMTAB_H
#define SYMTAB_H

#include "type.h"
#include <string>
#include "ast.h"
#define FOUND 0
#define NOTFOUND -1

/*
struct syminfo{
string symname ="";
string scope = "";
Type* symtype =NULL;
};
*/

typedef umap< string, Type* > symtab_t;

//see parser.ypp
extern umap< string, symtab_t* > symtab_top; 
extern string fullscope;
extern symtab_t *symtab;
extern std::ostream* fp;

symtab_t* init_symtab_top();
bool symadd(string symname, Type* symtype);
void print_symtab(ostream& symbolTable = *fp);
int curr_scope(string symname);
int any_scope(string symname);
int symadd_list(astnode* node, Type* symtype, int token_name);
Type* symtype(string symname);

#endif
