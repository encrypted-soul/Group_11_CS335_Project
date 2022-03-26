#include <bits/stdc++.h>
#include "ast.h"

astnode::astnode(std::string type, std::string value) {
  this->type = type;
  this->value = value;
}

astnode::astnode(std::string type, std::string value,
                 std::vector<astnode*> children) {
  this->type = type;
  this->value = value;
  this->children = children;
}

astnode* create_astnode(std::string type, std::string value,
                        std::vector<astnode*> children) {
  return new astnode(type, value, children);
}