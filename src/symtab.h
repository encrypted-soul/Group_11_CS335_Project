#ifndef SYMTAB_H
#define SYMTAB_H

#include "type.h"
#include <string>

extern umap<string, Type*> symtab; //see parser.ypp
//extern string fullscope;

int symadd(string symname, Type* symtype);
void print_symtab();

#endif
