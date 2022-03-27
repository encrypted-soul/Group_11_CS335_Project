#include "ast.h"

astnode::astnode(Type* type, std::string id, bool isTerminal) {
  this->type = type;
  this->id = id;
  this->isTerminal = isTerminal;
}

astnode::astnode(Type* type, std::string id, bool isTerminal,
                 std::vector<astnode*> children) {
  this->type = type;
  this->id = id;
  this->isTerminal = isTerminal;
  this->children = children;
}

// astnode& astnode::operator<<(const astnode& right) {
//   for (auto& child : right.children) {
//     this->children.push_back(child);
//   }
//   return *this;
// }

astnode* create_astnode(Type* type, std::string id, bool isTerminal,
                        std::vector<astnode*> children) {
  return new astnode(type, id, isTerminal, children);
}