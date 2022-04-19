
#include "type.h"
#include "ast.h"

#define PARENT_NONE NULL

typedef enum
{
    Return_VOID,
    Return_INT,
    Return_FLOAT
    
} tokenReturnType;

typedef enum
{
	CONST_type,
	VAR_type,
	NONE_type
	
} tokenConstType;


typedef struct threeAddressCode
{
    char *code;
    int gotoLine;
    struct threeAddressCode *next;
    
} threeAddressCode ;

struct backPatchList 
{
    threeAddressCode   *entry;
    struct backPatchList  *next;

};
typedef struct backPatchList   backPatchList ;


threeAddressCode* appendCode(char *code);
void backpatch(backPatchList * list, int gotoL);
backPatchList* mergelists(backPatchList  * a, backPatchList  * b);
backPatchList* appendToBackPatch(backPatchList  * list, threeAddressCode  * entry);