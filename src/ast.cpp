#include "ast.h"

astnode::astnode(){};

astnode::astnode(int tokenId) : id(to_string(tokenId)) {}

astnode::astnode(Type* type, int tokenId)
    : type(type), id(to_string(tokenId)) {}

astnode::astnode(string id, bool isTerminal, vector<astnode*> children)
    : id(id), isTerminal(isTerminal), children(children) {}

astnode::astnode(Type* type, string id, bool isTerminal,
                 vector<astnode*> children)
    : type(type), id(id), isTerminal(isTerminal), children(children) {}

astnode::astnode(int tokenId, Data* data)
    : id(to_string(tokenId)), data(data) {}

astnode::astnode(Type* type, int tokenId, Data* data)
    : type(type), id(to_string(tokenId)), data(data) {}

astnode::astnode(string id, bool isTerminal, vector<astnode*> children,
                 Data* data)
    : id(id), isTerminal(isTerminal), children(children), data(data) {}

astnode::astnode(Type* type, string id, bool isTerminal,
                 vector<astnode*> children, Data* data)
    : type(type),
      id(id),
      isTerminal(isTerminal),
      children(children),
      data(data) {}

// astnode& astnode::operator<<(const astnode& right) {
//   for (auto& child : right.children) {
//     this->children.push_back(child);
//   }
//   return *this;
// }

astnode* appendId(astnode* node, const char* appendId) {
  node->id += "+";
  node->id += string(appendId);
  return node;
}

astnode* newId(astnode* node, string idk) {
  node->id = idk;
  return node;
}

// // Perform type resoulution here
// binaryOpNode::binaryOpNode(exprNode* left, operatorNode* opNode,
//                            exprNode* right) {
//   this->children = {left, opNode, right};
//   this->id = "binary";
// }

// binaryOpNode::binaryOpNode(exprNode* left, int opcode, exprNode* right) {
//   this->children = {left, new operatorNode(opcode), right};
//   this->id = "binary";
// }

// unaryOpNode::unaryOpNode(operatorNode* opNode, exprNode* first) {
//   this->children = {opNode, first};
//   this->id = "unary";
// }

// unaryOpNode::unaryOpNode(int opcode, exprNode* first) {
//   this->children = {new operatorNode(opcode), first};
//   this->id = "unary";
// }
