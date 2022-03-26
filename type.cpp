#include "type.h"

#include <bits/stdc++.h>

using namespace std;

string DefinedType::getType() {
  return basename;  // int, float , ...
}

Type *DefinedType::copy() {
  return (new DefinedType(*this));
}

string ArrayType::getType() {
  // "[" ArrayLength "]" ElementType
  // e.g. [10]int, [10][11]int
  return "[" + to_string(arrayLength) + "]" + elementType->getType();
}

Type *ArrayType::clone() {
  return (new ArrayType(*this));
}

string StructType::getType() {
  // structName { name1 : type, name2 : type, ...}
  // e.g. Type { getType: string(), copy: Type*(), .. }
  string structTypeName;
  structTypeName += structName;
  structTypeName += "{";
  for (auto& [name, type] : memberTypes) {
    structTypeName += name;
    structTypeName += ":";
    structTypeName += type->getType();
    structTypeName += ",";  // weird comma at the end, Sorry!
  }
  structTypeName += "}";
  return structTypeName;
}

Type* StructType::copy() {
  return (new StructType(*this));
}

string FunctionType::getType() {
  // returnType( argType1, argType2, ....)
  string funcTypeName;
  funcTypeName += returnType->getType();
  funcTypeName += "(";
  Type* temp = argTypeList;
  while (temp != NULL) {
	  funcTypeName += temp->getType();
	  temp = temp->next;
  }
  funcTypeName += ")";

  return funcTypeName;
}

Type* FunctionType::copy() {
  return (new FunctionType(*this));
}

string PointerType::getType(){
	// baseType*
	return baseType->getType() + "*";
}