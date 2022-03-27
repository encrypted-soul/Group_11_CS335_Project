#ifndef AST_H
#define AST_H
#include "type.h"

class astnode {
  // for terminal : lexeme, value(id), data type
  // for non-terminal : grammar symbol, data type, children
 public:
  Type* type;
  std::string id;
  bool isTerminal;
  std::vector<astnode*> children;
  astnode(Type* type, std::string id, bool isTerminal);
  astnode(Type* type, std::string id, bool isTerminal,
          std::vector<astnode*> children);

  astnode& operator<<(const astnode& right);
};

astnode* create_astnode(Type* type, std::string id, bool isTerminal,
                        std::vector<astnode*> children);
#endif