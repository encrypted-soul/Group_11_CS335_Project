#ifndef AST_H
#define AST_H
#include "data.h"
#include "type.h"

struct astnode {
  // for terminal : lexeme, value(id), data type
  // for non-terminal : grammar symbol, data type, children
  Type* type = new Type();  // NULL_TYPE by default
  string id = "";
  Data* data = new Data();
  bool isTerminal = true;
  std::vector<astnode*> children = vector<astnode*>();  // empty by default

  astnode();
  astnode(int tokenId);  // useful for terminals having no type e.g. PACKAGE
  astnode(Type* type,
          int tokenId);  // useful for terminals having type e.g. IDENTIFIER
  astnode(string id, bool isTerminal,
          vector<astnode*> children);  // for non-terminal having NULL_TYPE
          
  astnode(Type* type, string id, bool isTerminal, vector<astnode*> children);
  
  astnode(int tokenId, Data* data);  									// useful for terminals having no type e.g. PACKAGE
  astnode(Type* type, int tokenId, Data* data); 						// useful for terminals having type e.g. IDENTIFIER
  astnode(string id, bool isTerminal, vector<astnode*> children, Data* data);	// for non-terminal having NULL_TYPE
  
  astnode(Type* type, string id, bool isTerminal, vector<astnode*> children, Data* data);
};

// astnode& operator>>(astnode& node, const char* appendId);
// astnode& operator>>=(astnode& node, const char* newId);

astnode* appendId(astnode* node, const char* appendId);
astnode* newId(astnode* node, string newId);
// struct exprNode : astnode {
//   exprNode(Type* type, string id, bool isTerminal)
//       : astnode(type, id, isTerminal){};
//   exprNode(Type* type, string id, bool isTerminal, vector<astnode*>&
//   children)
//       : astnode(type, id, isTerminal, children){};
// };

// struct operatorNode : astnode {
//   int opcode;
//   operatorNode(int opcode);
// };
// struct unaryOpNode : exprNode {
//   unaryOpNode(operatorNode* opNode, exprNode* first);
//   unaryOpNode(int opcode, exprNode* first);
// };
// struct binaryOpNode : exprNode {
//   binaryOpNode(exprNode* left, operatorNode* opNode, exprNode* right);
//   binaryOpNode(exprNode* left, int opcode, exprNode* right);
// };

// /* Different nodes are defined inorder to perform different checks
//    Easily. For example relOpNode node needs different checks and type
//    resolution than addOpNode */
// struct relOpNode : binaryOpNode {
//   using binaryOpNode::binaryOpNode;
// };

// struct mulOpNode : binaryOpNode {
//   using binaryOpNode::binaryOpNode;
// };

// struct addOpNode : binaryOpNode {
//   using binaryOpNode::binaryOpNode;
// };
#endif
