#ifndef AST_H
#define AST_H
#include <bits/stdc++.h>

class astnode {
  // for terminal : lexeme, value(id), data type
  // for non-terminal : grammar symbol, data type, children
 public:
  std::string type;
  std::string value;
  std::vector<astnode*> children;
  astnode(std::string type, std::string value);
  astnode(std::string type, std::string value, std::vector<astnode*> children);
};

astnode* create_astnode(std::string type, std::string value,
                        std::vector<astnode*> children);
#endif