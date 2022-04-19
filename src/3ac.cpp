#include "3ac.h"


threeAddressCode  *codePtr = NULL;

extern int yylineno;
extern int yyin;
 
int globalOffset = 0, tempIntCounter = 0,tempFloatCounter= 0,currentLine = -1;

threeAddressCode* appendCode(char *code){

	threeAddressCode *temp = new threeAddressCode;
	
	temp->code=(char *)malloc(sizeof(char)*strlen(code));
	strcpy(temp->code,code);
	temp->gotoLine = -1;
	temp->next = NULL;
	
	
	if(codePtr == NULL){
		codePtr=temp;	
	}
	else{
		threeAddressCode *p=codePtr;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;	
	}
	currentLine++;
	return temp;
}

void backpatch(backPatchList* list, int gotoL){
	if(list == NULL){
		return;
	} else{
		backPatchList* temp;
		while(list){
			if(list->entry != NULL){
				list->entry->gotoLine = gotoL;
			}
			list = list->next;
		}
	}
}

backPatchList* mergelists(backPatchList* a, backPatchList* b){
	if(a != NULL && b == NULL){
		return a;
	}
	else if(a == NULL && b != NULL){
		return b;
	}
	else if(a == NULL && b == NULL){
		return NULL;
	}
	else{
		backPatchList* temp = a;
		while(a->next){
			a = a->next;
		}
		a->next = b;
		return temp;
	}
}

backPatchList* appendToBackPatch(backPatchList* p, threeAddressCode* newCode){
	
	if(newCode == NULL){
		return p;
	}
	else if(p == NULL){
		backPatchList* temp = new backPatchList;
		temp->entry = newCode;
		temp->next = NULL;
		return temp;
	}
	else{
		backPatchList* temp = malloc(sizeof(backPatchList));
		temp->entry = newCode;
		temp->next=NULL;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next = temp;
		return temp;
	}
}