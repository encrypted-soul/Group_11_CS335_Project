#include<bits/stdc++.h>

using namespace std;

typedef struct details{
	public:
		bool status = false;	//true->live
		int nextuse = INT_MAX;
		//string addr_desc = "";
}details;

//extern unordered_map <string,details*> symtab[];
extern vector < unordered_map <string,details*>> symtab;

//extern vector < unordered_map <string,details*>> symtab2;

extern unordered_map <string,string> addrdesc;
extern unordered_map <string,string> regdesc;	//for now
extern unordered_map <int,int> line_block;

extern list <string> emptyreg;//	 = {"$t1,$t2"};

extern unordered_map<string, details*>:: iterator itr;
extern unordered_map<string, string>:: iterator itr2;

