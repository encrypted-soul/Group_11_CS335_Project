#include<bits/stdc++.h>
#include "tac.h"
using namespace std;

vector <tac> prog;		//the whole ir code
int n_lines;

vector <int> leaders;		//block leaders if i is in leaders then prog[i] = leader
vector <int> label_leaders;

int n_block;
vector <int> start_block;
vector <int> end_block;

vector < vector <tuple <string,bool,int> > > updates;	//updates[i][0,1,or 2] gives one of 3 updates on symtab

unordered_map<string, details*>:: iterator itr;
unordered_map<string, string>:: iterator itr2;
//unordered_map <string,details*> symtab[n_block];

unordered_map <string,string> addrdesc;			//done
unordered_map <string,string> regdesc;
unordered_map <int,int> line_block;
vector < unordered_map <string,details*>> symtab;		//this denotes entire symtable
//vector < unordered_map <string,details*>> symtab2;

unordered_map <string,string> strings;

list <string> emptyreg = {"$a1","$a2","$a3","$t1","$t2","$t3","$t4","$t5","$t6","$t7",/*"$t8",/*"$t9",*/"$s1","$s2","$s3","$s4","$s5","$s6","$s7"};

int label_ret = 0;

string blockcode = "";

void add_emptyreg(string reg){
	emptyreg.push_back(reg);
}

bool is_labelleader(int x){
	bool check = 0;
	for(int i=0;i<label_leaders.size();i++){
		if(x==label_leaders[i]){
			check = 1;
			break;
		}
	}
	return check;
}

//new
/*bool is_string_var(string s1){
	string temp_str_1 = "t_temporary_string";
	string temp_str_2 =  s1.substr(0, 18);
	//cout << temp_str_1 << temp_str_2 << endl;
	if(temp_str_2==temp_str_1){
		return 1;
	}
	else return 0;
}*/

void enter_variables(vector < unordered_map <string,details*>> &symtab){		//fills variables in sym_tabs
	//cout << n_lines << '\t' << n_block << endl;
	for(int i=0;i<n_block;i++){				//symtab[i] denotes ith (0 to n_block-1) block's symtable
		/*int start_block = leaders[i];
		int end_block;
		if(i==n_block-1) end_block = n_lines;
		else end_block = leaders[i+1]-1;*/
		for(int j=start_block[i];j<=end_block[i];j++){
			//prog[j-1] = tac on jth line on ith block
			//get only new variables from this tac
			if(prog[j-1].in1!=""){
				if(isInteger(prog[j-1].in1)!=1){
					string var_name = prog[j-1].in1;

					if(symtab[i].find(var_name)==symtab[i].end()){
						details * var_details = new details();
						symtab[i].insert(make_pair(var_name, var_details));
						//cout << "inserting into symtab " << i << " var" << var_name << endl;
					}
				}
			}
			if(prog[j-1].in2!=""){
				if(isInteger(prog[j-1].in2)!=1){
					string var_name = prog[j-1].in2;
					if(symtab[i].find(var_name)==symtab[i].end()){
						details * var_details = new details();
						symtab[i].insert(make_pair(var_name, var_details));
						//cout << "inserting into symtab "<< i << " var" << var_name << endl;
					}
				}
			}
			if(prog[j-1].out!=""){
				if(isInteger(prog[j-1].out)!=1){
					string var_name = prog[j-1].out;
					if(symtab[i].find(var_name)==symtab[i].end()){
						details * var_details = new details();
						symtab[i].insert(make_pair(var_name, var_details));
						//cout << "inserting into symtab "<< i << " var" << var_name << endl;
					}
				}
			}
		}
		//cout << start_block << '\t' << end_block << endl;
	}
}

void fill_nextuse( unordered_map <string,details*> &symtab,int start_block,int end_block){
	//cout << "filling from " << start_block << " to " << end_block << endl;
	//for one block only
	for(int i=end_block;i>=start_block;i--){	//i = line no.
		//copying from symtab to updates[i-1]	//for line i
		//prog[i-1] = ith line
		//cout << "here for from line " << start_block << " to " << end_block << " at line " << i << endl;
		string in_1 = prog[i-1].in1;
		string in_2 = prog[i-1].in2;
		string out_1 = prog[i-1].out;
		//cout << "variables " << in_1 << "&" << in_2 << "&" << out_1 << endl;
		if(out_1!="" && isInteger(out_1)!=1){
			//copying
			updates[i-1].push_back(make_tuple(out_1,symtab[out_1]->status,symtab[out_1]->nextuse));
			//updating
			symtab[out_1]->status = false;
			symtab[out_1]->nextuse = INT_MAX;
		}
		if(in_1!="" && isInteger(in_1)!=1){
			updates[i-1].push_back(make_tuple(in_1,symtab[in_1]->status,symtab[in_1]->nextuse));
			symtab[in_1]->status = true;
			symtab[in_1]->nextuse = i;
		}
		if(in_2!="" && isInteger(in_2)!=1){
			updates[i-1].push_back(make_tuple(in_2,symtab[in_2]->status,symtab[in_2]->nextuse));
			symtab[in_2]->status = true;
			symtab[in_2]->nextuse = i;
		}
	}
}

void update_symtab(vector < unordered_map <string,details*>> &symtab,vector < vector <tuple <string,bool,int> > > updates,int lineno){
	//we have to update updates[lineno-1] symtab[i] where i = block no. of line no. lineno
	int block_no = line_block[lineno];	//update symtab[block_no]
	//cout << "updating symtab at line : " << lineno << endl;
	for(int i=0;i<updates[lineno-1].size();i++){
		string var = get<0>(updates[lineno-1][i]);
		bool status_new = get<1>(updates[lineno-1][i]);
		int nextuse_new = get<2>(updates[lineno-1][i]);

		//updating symtab
		symtab[block_no][var]->status = status_new;
		symtab[block_no][var]->nextuse = nextuse_new;
	}

}

void print_prog(){
	for(int i=0;i<prog.size();i++){
		prog[i].get_details();
	}
}

void print_symtab(vector < unordered_map <string,details*>> &symtab,int n_block){				//prints symbol_table
	for(int i=0;i<n_block;i++){
		cout << "----------Block " << i << "---------------" << endl;
		for (itr = symtab[i].begin(); itr != symtab[i].end(); itr++)
	    	{
			cout << itr->first << "\t" << itr->second->status << "\t" << itr->second->nextuse << endl;
	     	}
     	}
}

void fill_addrdesc(vector < unordered_map <string,details*>> &symtab,int n_block){
	for(int i=0;i<n_block;i++){
		for (itr = symtab[i].begin(); itr != symtab[i].end(); itr++)
		    	{
				if(addrdesc.find(itr->first)==addrdesc.end()){
					addrdesc.insert(make_pair(itr->first,"mem"));
					//cout << "inserted " << itr->first << endl;
				}
		     	}
	}
}

void print_addrdesc(){
	for (itr2 = addrdesc.begin(); itr2 != addrdesc.end(); itr2++)
	    	{
			cout << itr2->first << "\t" << itr2->second << endl;
	     	}
}

string getlocation(string var_name){
	return addrdesc[var_name];
}

void setlocation(string var_name,string reg_name){
	addrdesc[var_name] = reg_name;
}

void setregister(string reg_name,string var_name){
	regdesc[reg_name] = var_name;
}

bool check_reg(string str){
	//checks whether str is a register or not
	if(str[0]=='$')return true;	//for now
	else return false;
}

string getReg(string var,tac instr,vector < unordered_map <string,details*>> &symtab){			//returns register for tac.out
	//x = y op z
	string reg;
	string y = instr.in1;	//y
	string z = instr.in2;	//z
	string x = instr.out;	//x
	int block_no = line_block[instr.lineno];
	//cout << "GETTING rg for " << var << endl;
	if(var==x){
		if(isInteger(y)==0 && check_reg(getlocation(y))==true /*&& symtab[block_no][y]->status==false*/ && symtab[block_no][y]->nextuse==INT_MAX ){
			//y is in a register
			reg = getlocation(y);
			blockcode = blockcode + "sw\t" + reg + ", " + y + "\n";
			//update everything for variable y
			setlocation(y,"mem");	//addrdesc[y] = "mem";


		}
		else if(emptyreg.size()>0){
			reg = emptyreg.front();
			emptyreg.pop_front();
			//return reg;
		}
		else/* if(symtab[block_no][x]->nextuse!=INT_MAX)*/{
			int max_nextuse = 0;
			string var_maxnextuse = "";
			for(itr = symtab[block_no].begin(); itr != symtab[block_no].end(); itr++){
				if(check_reg(addrdesc[itr->first])==true){
					if(itr->second->nextuse >= max_nextuse){
						max_nextuse = itr->second->nextuse;
						var_maxnextuse = itr->first;
					}
				}
			}
			//store var_maxnextuse to "mem" & return its reg

			reg = getlocation(var_maxnextuse);
			//update everything for variable var_maxnextuse;
			blockcode = blockcode + "sw\t" + reg + ", " + var_maxnextuse + "\n";
			setlocation(var_maxnextuse,"mem");//addrdesc[var_maxnextuse] = "mem";
			//return reg;
		}
		/*else{
			return "mem";
		}*/
	}

	else{						//requires register for y or z
		if(emptyreg.size()>0){
			reg = emptyreg.front();
			emptyreg.pop_front();
			//return reg;
		}
		else/* if(symtab[block_no][var]->nextuse!=INT_MAX)*/{	//var has next use in the block
			int max_nextuse = 0;
			string var_maxnextuse = "";
			for(itr = symtab[block_no].begin(); itr != symtab[block_no].end(); itr++){
			//cout << "checking at line "<< instr.lineno  << "for variable " << var << "::" << itr->first << "with nextuse "<< itr->second->nextuse << "\n";
			//print_symtab(symtab,line_block[instr.lineno]);
				if(var!= itr->first && check_reg(addrdesc[itr->first])==true){
					//cout << "check for :" <<  itr->first<< "\n";
					if(itr->second->nextuse >= max_nextuse){
						max_nextuse = itr->second->nextuse;
						//cout << "cross check for :" <<  itr->first << endl;
						var_maxnextuse = itr->first;
					}
				}
			}
			//store var_maxnextuse to "mem" & return its reg

			reg = getlocation(var_maxnextuse);
			//update everything for variable var_maxnextuse;
			blockcode = blockcode + "sw\t" + reg + ", " + var_maxnextuse + "\n";
			setlocation(var_maxnextuse,"mem");//addrdesc[var_maxnextuse] = "mem";
		}
	}
	//cout << "GOT rg for " << var << "---------" << reg << endl;

	return reg;
}

void conserve_block(){
	for (itr2 = addrdesc.begin(); itr2 != addrdesc.end(); itr2++)
	    	{
			//cout << itr2->first << "\t" << itr2->second << endl;
			if(check_reg(itr2->second)==1){
			string reg_old = itr2->second;
			string variable = itr2->first;
			blockcode = blockcode + "sw\t" + reg_old + ", " +  variable + "\n";
			add_emptyreg(reg_old);
			setlocation(variable,"mem");
			setregister(reg_old,"");
		}
	}
}

void init_block(){
	for (itr2 = addrdesc.begin(); itr2 != addrdesc.end(); itr2++)
	    	{
			//cout << itr2->first << "\t" << itr2->second << endl;
			if(check_reg(itr2->second)==1){
			string reg_old = itr2->second;
			string variable = itr2->first;
			//blockcode = blockcode + "sw\t" + reg_old + ", " +  variable + "\n";
			add_emptyreg(reg_old);
			setlocation(variable,"mem");
			setregister(reg_old,"");
		}
	}
}

int main(int argc, char **argv){

	leaders.push_back(1);

	string line;
	ifstream mycode(argv[1]);

	int is_prev = 0;		//1 if is_prev is goto - for leader

	while(getline(mycode,line)){
		//cout << line << endl;
		//cout << typeid(line).name() << endl;
		//line.ignore(' ');
		istringstream str(line);
		//cout << "-------------" << endl;
		string token;
		int i = 1;

		tac ins_temp;
		while(getline(str,token,',')){
			//cout << token << '\t' << typeid(token).name() << '\n';

			if(i==1){			//getting line no.
				if(token=="#"){		//new commenting
					continue;
				}
				ins_temp.lineno = stoi(token);
			}
			else if(i==2){
				if(token=="="){
					ins_temp.type = "assign1";					//handles x = 3, x = y[i] , x = *y
				}
				else if(token=="+"||token=="-"||token=="*"||token=="/"||token=="&"||token=="|"||token=="^"||token=="%"){	//x = y op z check for x = op y
					ins_temp.type = "assign2";
					ins_temp.op = token;
				}//add more operators
				else if(token=="<"||token==">"||token==">="||token=="<="||token=="=="||token=="!="||token=="&&"||token=="||"){
					//new
					ins_temp.type = "relation";
					ins_temp.op = token;
				}
				else if(token=="ifgoto"){
					ins_temp.type = "ifgoto";
				}
				else if(token=="goto"){
					ins_temp.type = "goto";
				}
				//new
				else if(token=="param"){
					ins_temp.type = "param";
				}
				else if(token=="pop"){
					ins_temp.type = "pop";
				}
				else if(token=="args_num"){
					ins_temp.type = "args_num";
				}
				else if(token=="string"){
					ins_temp.type = "string";
				}
				else if(token=="scan"){
					ins_temp.type = "scan";
				}
				//new till here
				else if(token=="call"){
					ins_temp.type = "call";
				}
				else if(token=="label"){
					ins_temp.type = "label";
				}
				else if(token=="function"){	//new
					ins_temp.type = "function";
				}
				else if(token=="exit"){					//name it exit
					ins_temp.type = "return1";					//no further tokens
				}
				else if(token=="return"){
					ins_temp.type = "return2";
				}
				else if(token=="print"){
					ins_temp.type = "print";
				}
				//getreturn
				else if(token=="getreturn"){
					ins_temp.type = "getreturn";
				}
				//label??
			}
			else{
				if(ins_temp.type == "assign1"){						//ptr and index assignments??
					if(i==3)ins_temp.out = token;
					if(i==4)ins_temp.in1 = token;
				}
				else if(ins_temp.type == "assign2"){
					if(i==3)ins_temp.out = token;
					if(i==4)ins_temp.in1 = token;
					if(i==5)ins_temp.in2 = token;
				}
				else if(ins_temp.type == "relation"){	//new
					if(i==3)ins_temp.out = token;
					if(i==4)ins_temp.in1 = token;
					if(i==5)ins_temp.in2 = token;
				}
				else if(ins_temp.type == "ifgoto"){
					if(i==3)ins_temp.op = token;
					if(i==4)ins_temp.in1 = token;
					if(i==5)ins_temp.in2 = token;
					//if(i==6)ins_temp.target = stoi(token);	//target???//new
					if(i==6)ins_temp.target_label = token;
				}
				else if(ins_temp.type == "goto"){
					//if(i==3)ins_temp.target = stoi(token);	//target???//new
					if(i==3)ins_temp.target_label = token;
				}
				//new
				else if(ins_temp.type == "param"){
					if(i==3)ins_temp.in1 = token;
				}
				else if(ins_temp.type == "pop"){
					if(i==3)ins_temp.in1 = token;
					if(i==4)ins_temp.in2 = token;
				}
				else if(ins_temp.type=="args_num"){
					if(i==3)ins_temp.in1 = token;
				}
				else if(ins_temp.type=="string"){
					if(i==3)ins_temp.in1 = token;
					if(i==4){
						ins_temp.in2 = token;
						strings[ins_temp.in1] = ins_temp.in2;
					}
				}
				else if(ins_temp.type=="scan"){
					if(i==3)ins_temp.out = token;
				}
				//new till here
				else if(ins_temp.type == "call"){
					if(i==3)ins_temp.op = token;
					if(i==4)ins_temp.in1 = token; //new - no.of params
				}
				else if(ins_temp.type == "label"){	//make diff bw function and label//new
					if(i==3)ins_temp.op = token;
				}
				else if(ins_temp.type == "function"){	//make diff bw function and label//new
					if(i==3)ins_temp.op = token;
				}
				else if(ins_temp.type == "return2"){
					if(i==3)ins_temp.in1 = token;
				}
				else if(ins_temp.type == "print"){
					if(i==3)ins_temp.in1 = token;
				}
				//getreturn
				else if(ins_temp.type == "getreturn"){
					if(i==3)ins_temp.in1 = token;
				}
			}
			i++;
		}
		if(is_prev==1){
			leaders.push_back(ins_temp.lineno);
			//printf("HERE\n");
			is_prev = 0;
		}
		if(ins_temp.type == "ifgoto" || ins_temp.type == "goto" || ins_temp.type == "label" || ins_temp.type == "function" || ins_temp.type == "call"){	//checl for label is block or not??	//new changes here
			if(ins_temp.type == "ifgoto" || ins_temp.type == "goto"){
				//leaders.push_back(ins_temp.target);
				//printf("HERE\n");
				is_prev = 1;
			}
			else if(ins_temp.type == "label" || ins_temp.type == "function"){
				label_leaders.push_back(ins_temp.lineno);
				leaders.push_back(ins_temp.lineno);	//lineno for label defined
			}
			else{
				leaders.push_back(ins_temp.lineno);
			}
		}
		prog.push_back(ins_temp);
		//printf("\n");
	}

	n_lines = prog.size();
	sort(leaders.begin(),leaders.end());			//blocks in order- check for uniqeness?
	leaders.erase( unique( leaders.begin(), leaders.end() ), leaders.end() );

	//printing leaders
	/*for(int i=0;i<leaders.size();i++){
		cout << leaders[i] << "\t";
	}
	cout << "\n";
	for(int i=0;i<label_leaders.size();i++){
		cout << label_leaders[i] << "\t";
	}
	cout << "\n";*/

	n_block = leaders.size();
	start_block = leaders;
	for(int i=0;i<leaders.size()-1;i++){
		end_block.push_back(leaders[i+1]-1);
	}
	end_block.push_back(n_lines);
	/*for(int i=0;i<leaders.size();i++){
		cout << start_block[i] << end_block[i] << "HERE\n";
	}*/
	//filling mapping between lines to blocks
	for(int i=0;i<n_block;i++){
		for(int j=start_block[i];j<=end_block[i];j++){
			line_block.insert(make_pair(j,i));
		}
	}

	//<testing>
	//cout << "-----------program------------\n";
	//print_prog();
	//for(int i=1;i<=n_lines;i++){
	//	cout << line_block[i] << endl;
	//}
	//</testing>

	//symbol table
	//unordered_map <string,details*> symtab[n_block];		//this denotes entire symtable
	symtab.resize(n_block);
	//symtab2.resize(n_block);

	/*
	//<testing>
	string var1_name = "x";

	details * var1 = new details();
	var1->status = false;
	var1->nextuse = 5;

	symtab[0].insert(make_pair(var1_name, var1));

	for (itr = symtab[0].begin(); itr != symtab[0].end(); itr++)
    	{
        	// itr works as a pointer to pair<string, double>
        	// type itr->first stores the key part  and
        	// itr->second stroes the value part
        	cout << itr->first << "\t" << itr->second->status << "\t" << itr->second->nextuse << endl;
     	}
     	//</testing>
	*/
	enter_variables(symtab);
	//enter_variables(symtab2);
	//cout << "entered variables\n";
	fill_addrdesc(symtab,n_block);
	//<testing>
	/*for (itr = symtab[1].begin(); itr != symtab[1].end(); itr++)
    	{
        	// itr works as a pointer to pair<string, double>
        	// type itr->first stores the key part  and
        	// itr->second stroes the value part
        	cout << itr->first << "\t" << itr->second->status << "\t" << itr->second->nextuse << endl;
     	}*/
     	/*string key_temp = "cfds";
     	if(symtab[1].find(key_temp)==symtab[1].end()){
     		cout << "a is here!" << endl;
     	}*/
     	//cout << "SYMTAB" << endl;
     	//print_symtab(symtab,n_block);
     	//cout << "addrdesc" << endl;
     	//print_addrdesc();
     	//cout << symtab[1]["b"]->status << endl;
     	//</testing>

     	updates.resize(n_lines);
     	/*for(int i=0;i<updates.size();i++){
     		updates[i].resize(3);
     	}*/

     	//<testing>
     	//updates[0].push_back(make_tuple("a",true,5));
     	//cout << "---------updates-------------\n";
     	//for(int i=0;i<updates[0].size();i++){
     	//	cout << get<0>(updates[0][i]) << '\t' << get<1>(updates[0][i]) << '\t' << get<2>(updates[0][i]) << endl;
     	//}
     	//cout << symtab[0]["a"]->status << " should be 0 \n";
     	//</testing>

     	//nextuse filling for each block
     	for(int i=0;i<n_block;i++){
     		fill_nextuse(symtab[i],start_block[i],end_block[i]);
     	}

     	//<testing>
     	//print_symtab(symtab,n_block);
     	//cout << "-----------------------" << endl;

     	/*cout << "-----------updates------------" << endl;
     	for(int j=0;j<updates.size();j++){
     		cout << "updates  before line " << j << endl;
	     	for(int i=0;i<updates[j].size();i++){
	     		cout << j+1 << " : " << get<0>(updates[j][i]) << '\t' << get<1>(updates[j][i]) << '\t' << get<2>(updates[j][i]) << endl;
	     	}
     	}*/
     	//</testing>

	//cout << "----------------CODEGEN---------------\n";
	/*//prog[0].get
	codegen(prog[0],blockcode);
	codegen(prog[1],blockcode);
	codegen(prog[2],blockcode);
	codegen(prog[3],blockcode);
	codegen(prog[4],blockcode);
	codegen(prog[5],blockcode);
	codegen(prog[6],blockcode);
	codegen(prog[7],blockcode);
	codegen(prog[8],blockcode);
	cout << blockcode;*/

	//strings //new
	/*cout << "STTSTSTSTTS\n";
	for (itr2 = strings.begin(); itr2 != strings.end(); itr2++)
    	{
        	// itr works as a pointer to pair<string, double>
        	// type itr->first stores the key part  and
        	// itr->second stroes the value part
        	cout << itr2->first << "\t" << itr2->second << endl;
     	}*/

	//new - comment here
	//printing .data
	cout << ".data\n";
	for (itr2 = addrdesc.begin(); itr2 != addrdesc.end(); itr2++)
	{
		if(is_string_var(itr2->first)) continue;
		else if(itr2->first[0]=='"') continue;
		cout << itr2->first << ":\t.word\t0" << endl;
	}
	for (itr2 = strings.begin(); itr2 != strings.end(); itr2++)
    	{
        	cout << itr2->first << ":" << "\t" << ".asciiz\t" << itr2->second << endl;
     	}
	cout << ".text\nmain:\n";
	//.main

	for(int i=0;i<n_block;i++){
		init_block();	//starting block
		int is_conserved = 0;
		//cout << "CODE FOR BLOCK " << i << "\n";
		//cout << i << "\t" << is_labelleader(i) << endl;
		if(is_labelleader(leaders[i])!=true){
			blockcode = "l" + to_string(leaders[i]) + ":\n";
		}
		else{
			blockcode = "";
		}
		for(int index = start_block[i];index<=end_block[i];index++){	//index is lineno -> prog[index-1] is the code
			//update_symtab(symtab,updates,index);
			//cout << "at index : " << index << endl;
			if(prog[index-1].type=="ifgoto"||prog[index-1].type=="goto"||prog[index-1].type=="return1"){
				conserve_block();
				is_conserved = 1;
			}
			codegen(prog[index-1],blockcode);
			//print_symtab(symtab,n_block);
			update_symtab(symtab,updates,index);
		}
		//todo : store all variables back in memory and update regdesc,addrdesc.
		if(is_conserved==0){
			conserve_block();
		}
		cout << blockcode;
		/*for (itr2 = addrdesc.begin(); itr2 != addrdesc.end(); itr2++)
	    	{
			//cout << itr2->first << "\t" << itr2->second << endl;
			if(check_reg(itr2->second)==1){
				string reg_old = itr2->second;
				string variable = itr2->first;
				cout << "sw\t" << reg_old << ", " <<  variable << "\n";
				add_emptyreg(reg_old);
				setlocation(variable,"mem");
				setregister(reg_old,"");

			}
	     	}*/
	     	//conserve_block();
	     	//new comment till here
	}

	return 0;
}
