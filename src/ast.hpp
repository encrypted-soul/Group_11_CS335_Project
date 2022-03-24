#include <bits/stdc++.h>

namespace AST {

class astnode {
 public:
  std::string type;
  std::string value;
  std::vector<astnode*> children;
  astnode(std::string type, std::string value) {
    this->type = type;
    this->value = value;
  }
  astnode(std::string type, std::string value, std::vector<astnode*> children) {
    this->type = type;
    this->value = value;
    this->children = children;
  }
};

astnode* create_astnode(std::string type, std::string value,
                        std::vector<astnode*> children) {
  return new astnode(type, value, children);
}

}  // namespace AST