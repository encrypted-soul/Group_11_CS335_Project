#include<bits/stdc++.h>
#include "symtab_3ac.h"
//#include "codegen.h"
using namespace std;

class tac{			//program will be scanned into a list(or map etc.) of objects of this class

	public:
	int lineno = 1;
	string type = "";		//maybe define as enum type or mapping to types

	string in1 = "";				//SymTabEntry *in1;
	string in2 = "";				//SymTabEntry *in2;
	string out = "";				//SymTabEntry *out;

	int target  = -1;
	//new
	string target_label = "_NA_";
	string op = "";			//maybe define as enum type

	void get_details(){
		cout << "line = " << lineno << " type = " << type << " in1 = " << in1 << " in2 = " << in2 << " out = " << out << " target = " << target << " op = " << op << endl;
	}
};

extern vector <tac> prog;
extern vector <int> leaders;		//block leaders if i is in leaders then prog[i] = leader
extern vector <int> label_leaders;
extern int n_block;
extern vector <int> start_block;
extern vector <int> end_block;

extern vector < vector <tuple <string,bool,int> > > updates;	//updates[i][0,1,or 2] gives one of 3 updates on symtab i = lineno+1

void print_prog();
/*void print_leaders(){
	for(int i=0;i<leaders.size();i++){
		cout << leaders[i] << '\t';
	}
	printf("\n");
}*/

void enter_variables(vector < unordered_map <string,details*>> &symtab);

void print_symtab(vector < unordered_map <string,details*>> &symtab,int n_block);

void fill_addrdesc(vector < unordered_map <string,details*>> &symtab,int n_block);

void print_addrdesc();

//used in code gen

string getlocation(string var_name);

void setlocation(string var_name,string reg_name);

void setregister(string reg_name,string var_name);

string getReg(string var, tac instr,vector < unordered_map <string,details*>> &symtab);		//getreg function

void update_symtab(vector < unordered_map <string,details*>> &symtab,vector < vector <tuple <string,bool,int> > > updates,int lineno);

bool check_reg(string str);

bool is_labelleader(int x);

void add_emptyreg(string reg);

void conserve_block();

void init_block();

extern int label_ret;
extern int args_num ;

//code gen function
void codegen(tac instr,string &blockcode);

//additional functions

bool isInteger(string s);
bool is_string_var(string s1);
/*{
   if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false ;

   char * p ;
   strtol(s.c_str(), &p, 10) ;

   return (*p == 0) ;
}*/



