#include "ast.h"

astnode::astnode(){};

astnode::astnode(int tokenId) : id(to_string(tokenId)) {}

// astnode::astnode(Type* type, int tokenId)
//     : type(type), id(to_string(tokenId)) {}

astnode::astnode(string id, bool isTerminal, vector<astnode*> children)
    : id(id), isTerminal(isTerminal), children(children) {}

astnode::astnode(Type* type, string id, bool isTerminal,
                 vector<astnode*> children)
    : type(type), id(id), isTerminal(isTerminal), children(children) {}

astnode* appendId(astnode* node, const char* appendId) {
  node->id += "+";
  node->id += string(appendId);
  return node;
}

astnode* newId(astnode* node, const char* newId) {
  node->id = string(newId);
  return node;
}