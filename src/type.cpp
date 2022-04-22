#include "type.h"
using namespace std;

string Type::getType() {
  cout << "VIRTUAL FUNCTION OF TYPE NOT OVERLOADED!!" << endl;
  exit(1);
  return "";
}

Type* Type::copy() {
  cout << "VIRTUAL FUNCTION OF TYPE NOT OVERLOADED!!" << endl;
  exit(1);
  return NULL;
}

DefinedType::DefinedType(string _basename) {
  this->basename = _basename;
  this->typeClass = DEFINED_TYPE;
}

string DefinedType::getType() {
  if(this->cons == true) return (basename +" Const");
  return basename;  // int, float , ...
}

Type* DefinedType::copy() { return (new DefinedType(*this)); }

ArrayType::ArrayType(int _arrayLength, Type* _elementType) {
  this->arrayLength = _arrayLength;
  this->elementType = _elementType;
  this->typeClass = ARRAY_TYPE;
}

string ArrayType::getType() {
  // "[" ArrayLength "]" ElementType
  // e.g. [10]int, [10][11]int
  return "[" + to_string(arrayLength) + "]" + elementType->getType();
}

Type* ArrayType::copy() { return (new ArrayType(*this)); }

StructType::StructType(string _name, umap<string, Type*> _typeList) {
  this->structName = _name;
  this->membs = _typeList;
  this->typeClass = STRUCT_TYPE;
}

string StructType::getType() {
  // structName { name1 : type, name2 : type, ...}
  // e.g. Type { getType: string(), copy: Type*(), .. }
  string structTypeName;
  //structTypeName += structName;
  structTypeName += "{";
  bool flag=false;
  for (auto& [name, type] : membs) {
  	flag = true;
    structTypeName += name;
    structTypeName += ":";
    structTypeName += type->getType();
    structTypeName += ",";  
  }
  if(flag) structTypeName.pop_back();
  structTypeName += "}";
  return structTypeName;
}

Type* StructType::copy() { return (new StructType(*this)); }

/*
FunctionType::FunctionType(Type* _returnType, Type* _argTypeList) {
  this->returnType = _returnType;
  this->argTypeList = _argTypeList;
  this->typeClass = FUNCTION_TYPE;
}
*/

FunctionType::FunctionType(vector<Type*> _args, Type* _rets)
    : args(_args), rets(_rets) {
    typeClass = FUNCTION_TYPE;
}

/*
FunctionType::FunctionType(string _rettype, string _argtype) {
  this->rettype = _rettype;
  this->argtype = _argtype;
  this->typeClass = FUNCTION_TYPE;
}

int FunctionType::fcn_addtype(string type_name){
	this->argtype = this->argtype + " " + type_name;
	return 1;
}
*/

string FunctionType::getType() {
  // rets( argType1, argType2, ....)
  
  string funcTypeName;
  funcTypeName = "(";
  bool flag = false;
  for( auto i : args ){
  	funcTypeName += i->getType() + ",";
  	flag = true;
  }
  if(flag) funcTypeName.pop_back();
  funcTypeName += ")";
  if(rets) funcTypeName += rets->getType();
  return funcTypeName;
}

Type* FunctionType::copy() { return (new FunctionType(*this)); }

PntrType::PntrType(Type* _baseType) {
  this->baseType = _baseType;
  this->typeClass = POINTER_TYPE;
}

string PntrType::getType() {
  // baseType*
  return "*"+ baseType->getType();
}

/*
string DefinedType::getname() { return this->basename; }
string ArrayType::getname() { return (this->elementType->getname() + " array") } //elementype->getname WRONG?? will it call virtual getname?
string StructType::getname() { return this->structName; }
string FunctionType::getname() { return this->getType(); }
string PointerType::getname() { return (basetype->getname() + " ptr") }
*/

Type* PntrType::copy() { return (new PntrType(*this)); }
