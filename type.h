#ifndef TYPE_H
#define TYPE_H

#include <bits/stdc++.h>
#define umap unordered_map
using namespace std;

enum TypeClass {
	NULL_TYPE,
	DEFINED_TYPE, // int, float, string are predefined types
	ARRAY_TYPE,
	STRUCT_TYPE,
	FUNCTION_TYPE,
	POINTER_TYPE
};

// All type classes inherit from this class
class Type{
	public:
		virtual string getType();
		virtual Type *copy();
		Type *next = NULL; // type linked list
		TypeClass typeClass;
};

class DefinedType : Type{
	string basename;
	string getType();
	DefinedType(string);
	Type* copy();
};


class ArrayType : Type{
	int arrayLength;
	Type *elementType;

	string getType();
	ArrayType(int, Type*);
	Type* copy();
};

class StructType: Type{
	umap<string, Type*> memberTypes;
	string structName;

	string getType();
	StructType(string, umap<string, Type*>);
	Type *copy();
};

class FunctionType: Type{
	Type* returnType;
	Type* argTypeList; // linkedlist representation

	string getType();
	FunctionType(Type*,Type*);
	Type* copy();
};

class PointerType: Type{
	Type* baseType; // int* -> int

	string getType();
	PointerType(Type*);
	Type* copy();
};