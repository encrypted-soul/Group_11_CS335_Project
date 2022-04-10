#ifndef SYMTAB_H
#define SYMTAB_H

#include "type.h"
#include <string>
#include "ast.h"
#define FOUND 0
#define NOTFOUND -1

//see parser.ypp
extern umap<string, Type*> symtab; 
extern string fullscope;

bool symadd(string symname, Type* symtype);
void print_symtab(ostream& symbolTable);
int curr_scope(string symname);
int any_scope(string symname);
int symadd_list(astnode* node, Type* symtype, int token_name);

#endif
