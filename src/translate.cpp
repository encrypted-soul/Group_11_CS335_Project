#include <bits/stdc++.h>
#include "tac.h"
using namespace std;

//string blockcode="";

int args_num = 0;

bool isInteger(string s)
{
   if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false ;

   char * p ;
   strtol(s.c_str(), &p, 10) ;

   return (*p == 0) ;
}

//new
bool is_string_var(string s1){
	string temp_str_1 = "t_temporary_string";
	string temp_str_2 =  s1.substr(0, 18);
	//cout << temp_str_1 << temp_str_2 << endl;
	if(temp_str_2==temp_str_1){
		return 1;
	}
	else return 0;
}

void codegen(tac instr,string &blockcode){

	string reg1, reg2, reg3, reg4, loc1, loc2, loc3;

	int i=0;

	//vector <tac> prog;

	//while (instr!=NULL)

		//int label_ret=0;

	if(instr.type=="assign2"){
		string x = instr.out;
		string y = instr.in1;
		string z = instr.in2;

		if(isInteger(y)){
		//reg2 = y;
		//new
		blockcode = blockcode + "li\t" + "$t8 "+ ", " + y + "\n";
		reg2 = "$t8";
		}	//reg2 = 6
		else{
			loc2 = getlocation(y);
			if(loc2=="mem"){
				reg2 = getReg(y, instr, symtab);
				blockcode = blockcode + "lw\t" + reg2 + ", " + y + "\n";
				setregister(reg2, y);
				setlocation(y, reg2);
			}
			else{
				reg2 = loc2;
			}
		}

		if(isInteger(z)){reg3 = z;}	//reg2 = 6
		else{
			loc3 = getlocation(z);
			if(loc3=="mem"){
				reg3 = getReg(z, instr, symtab);
				blockcode = blockcode + "lw\t" + reg3 + ", " + z + "\n";
				setregister(reg3, z);
				setlocation(z, reg3);
			}
			else{
				reg3 = loc3;
			}
		}

		loc1 = getlocation(x);
		if(loc1=="mem"){
			reg1 = getReg(x, instr, symtab);
			setregister(reg1, x);
			setlocation(x, reg1);
		}
		else reg1 = loc1;

		//now ops
		if(instr.op=="+"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "addi\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "add\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="-"){
			/*if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "sub\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{*/
				blockcode = blockcode + "sub\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			//}
		}

		else if(instr.op=="*"){
			blockcode = blockcode + "mul\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
		}

		else if(instr.op=="/"){
			blockcode = blockcode + "div\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
		}

		else if(instr.op=="%"){
			blockcode = blockcode + "rem\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
		}

		else if(instr.op=="&"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "andi\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "and\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="|"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "ori\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "or\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="^"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "xori\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "xor\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

	}
	else if(instr.type=="assign1"){
		string x = instr.out;
		string y = instr.in1;

		if(isInteger(y)){reg2 = y;}	//reg2 = 6
		else{
			loc2 = getlocation(y);
			if(loc2=="mem"){
				reg2 = getReg(y, instr, symtab);
				blockcode = blockcode + "lw\t" + reg2 + ", " + y + "\n";
				setregister(reg2, y);
				setlocation(y, reg2);
			}
			else{
				reg2 = loc2;
			}
		}

		loc1 = getlocation(x);
		if(loc1=="mem"){
			reg1 = getReg(x, instr, symtab);
			setregister(reg1, x);
			setlocation(x, reg1);
		}
		else reg1 = loc1;

		if(isInteger(reg2)){
			blockcode = blockcode + "li\t" + reg1 + ", " + reg2 + "\n";
		}
		else{
			blockcode = blockcode + "move\t" + reg1 + ", " + reg2 + "\n";
			//todo : pointers
		}
	}

	else if(instr.type=="relation"){

		string x = instr.out;
		string y = instr.in1;
		string z = instr.in2;

		//if(isInteger(y)){reg2 = y;}	//reg2 = 6
		if(isInteger(y)){
		//reg2 = y;
		//new
		blockcode = blockcode + "li\t" + "$t8 "+ ", " + y + "\n";
		reg2 = "$t8";
		}
		else{
			loc2 = getlocation(y);
			if(loc2=="mem"){
				reg2 = getReg(y, instr, symtab);
				blockcode = blockcode + "lw\t" + reg2 + ", " + y + "\n";
				setregister(reg2, y);
				setlocation(y, reg2);
			}
			else{
				reg2 = loc2;
			}
		}

		if(isInteger(z)){reg3 = z;}	//reg2 = 6
		else{
			loc3 = getlocation(z);
			if(loc3=="mem"){
				reg3 = getReg(z, instr, symtab);
				blockcode = blockcode + "lw\t" + reg3 + ", " + z + "\n";
				setregister(reg3, z);
				setlocation(z, reg3);
			}
			else{
				reg3 = loc3;
			}
		}

		loc1 = getlocation(x);
		if(loc1=="mem"){
			reg1 = getReg(x, instr, symtab);
			setregister(reg1, x);
			setlocation(x, reg1);
		}
		else reg1 = loc1;

		//now ops
		if(instr.op=="<"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "slti\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "slt\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op==">"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "sgtu\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "sgt\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="<="){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "sleu\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "sle\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op==">="){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "sge\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "sge\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="=="){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "seq\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "seq\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="!="){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "sne\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "sne\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="&&"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "andi\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "and\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}

		else if(instr.op=="||"){
			if(isInteger(reg2)||isInteger(reg3)){
				blockcode = blockcode + "ori\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
			else{
				blockcode = blockcode + "or\t" + reg1 + ", " + reg2 + ", " + reg3 + "\n";
			}
		}
	}

	else if(instr.type=="call"){
		blockcode = blockcode + "jal\t" + instr.op + "\n";
			//blockcode = blockcode + "addi\t$sp,$sp,-4\n\t";
			//blockcode = blockcode + "sw\t$t0, 0($sp)\n\t";
	}

	else if(instr.type=="goto"){
		blockcode = blockcode + "j\t" + "" + instr.target_label + "\n";//todo : print target_label	//new
	}

	else if(instr.type=="ifgoto"){
			//new
			if(isInteger(instr.in1) && isInteger(instr.in2)){

				if(instr.op=="<="){
					blockcode = blockcode+ "ble\t" + instr.in1 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
				}

				if(instr.op==">="){
					blockcode = blockcode+ "bge\t" + instr.in1 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
				}

				if(instr.op=="<"){
					blockcode = blockcode+ "blt\t" + instr.in1 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
				}

				if(instr.op==">"){
					blockcode = blockcode+ "bgt\t" + instr.in1 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
				}

				if(instr.op=="="){
					blockcode = blockcode+ "beq\t" + instr.in1 + ", " + instr.in2 + ", " + "" + (instr.target_label) + "\n";
				}

				if(instr.op=="!="){
					blockcode = blockcode+ "bne\t" + instr.in1 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
				}
			}

			if(!isInteger(instr.in1) && isInteger(instr.in2)){

				if(instr.op=="<="){

					loc2 = getlocation(instr.in1);

					if(loc2!="mem"){
						blockcode = blockcode+ "ble\t" + loc2 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
					}else{
						reg2=getReg(instr.in1, instr, symtab);
						blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in1 +"\n";
						blockcode = blockcode+ "ble\t" + reg2 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
						setregister(reg2, instr.in1);
						//cout << "HERE\n";
				        	setlocation(instr.in1, reg2);
					}

				}

				if(instr.op==">="){

					loc2 = getlocation(instr.in1);

					if(loc2!="mem"){
						blockcode = blockcode+ "bge\t" + loc2 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
					}else{
						reg2=getReg(instr.in1, instr, symtab);
						blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in1 +"\n";
						blockcode = blockcode+ "bge\t" + reg2 + ", " + instr.in2 + ", " + "" + instr.target_label + "\n";
						setregister(reg2, instr.in1);
				        setlocation(instr.in1, reg2);
					}

				}

				if(instr.op=="<"){

					loc2 = getlocation(instr.in1);

					if(loc2!="mem"){
						blockcode = blockcode+ "blt\t" + loc2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
					}else{
						reg2=getReg(instr.in1, instr, symtab);
						blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in1 +"\n";
						blockcode = blockcode+ "blt\t" + reg2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
						setregister(reg2, instr.in1);
				        setlocation(instr.in1, reg2);
					}

				}

				if(instr.op==">"){

					loc2 = getlocation(instr.in1);

					if(loc2!="mem"){
						blockcode = blockcode+ "bgt\t" + loc2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
					}else{
						reg2=getReg(instr.in1, instr, symtab);
						blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in1 +"\n";
						blockcode = blockcode+ "bgt\t" + reg2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
						setregister(reg2, instr.in1);
				        setlocation(instr.in1, reg2);
					}
				}

				if(instr.op=="="){

					loc2 = getlocation(instr.in1);

					if(loc2!="mem"){
						blockcode = blockcode+ "beq\t" + loc2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
					}else{
						reg2=getReg(instr.in1, instr, symtab);
						blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in1 +"\n";
						blockcode = blockcode+ "beq\t" + reg2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
						setregister(reg2, instr.in1);
				        setlocation(instr.in1, reg2);
					}
				}

				if(instr.op=="!="){

					loc2 = getlocation(instr.in1);

					if(loc2!="mem"){
						blockcode = blockcode+ "bne\t" + loc2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
					}else{
						reg2=getReg(instr.in1, instr, symtab);
						blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in1 +"\n";
						blockcode = blockcode+ "bne\t" + reg2 + ", " + instr.in2 + ", " + "" + instr.target_label+ "\n";
						setregister(reg2, instr.in1);
				        setlocation(instr.in1, reg2);
					}

				}


			}

			if(!isInteger(instr.in1) && !isInteger(instr.in2)){

				loc1 = getlocation(instr.in1);
				loc2 = getlocation(instr.in2);

				if(loc1 != "mem" && loc2 != "mem"){

					if (instr.op=="<="){

						blockcode = blockcode+ "ble\t" + loc1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
					}

					if (instr.op==">="){

						blockcode = blockcode+ "bge\t" + loc1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
					}

					if (instr.op=="<"){

						blockcode = blockcode+ "blt\t" + loc1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
					}

					if (instr.op==">"){

						blockcode = blockcode+ "bgt\t" + loc1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
					}

					if (instr.op=="="){

						blockcode = blockcode+ "beq\t" + loc1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
					}

					if (instr.op=="!="){

						blockcode = blockcode+ "bne\t" + loc1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
					}
				}

				if(loc1=="mem" && loc2 !="mem"){

 					reg1=getReg(instr.in1,instr, symtab);

 					if (instr.op=="<="){
 						blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
 						blockcode = blockcode+ "ble\t" + reg1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op==">="){
 						blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
 						blockcode = blockcode+ "bge\t" + reg1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op=="<"){

 						blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
 						blockcode = blockcode+ "blt\t" + reg1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op==">"){

 						blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
 						blockcode = blockcode+ "bgt\t" + reg1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op=="="){

 						blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
 						blockcode = blockcode+ "beq\t" + reg1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op=="!="){

 						blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
 						blockcode = blockcode+ "bne\t" + reg1 + ", " + loc2 + ", " + "" + instr.target_label+ "\n";
 					}

 					setregister(reg1, instr.in1);
				    setlocation(instr.in1, reg1);
				}

				if(loc1=="mem" && loc2=="mem"){

					reg1=getReg(instr.in1,instr, symtab);
					reg2=getReg(instr.in2,instr, symtab);

					blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 +"\n";
					blockcode = blockcode + "lw\t" + reg2 + ", " + instr.in2 +"\n";

					if (instr.op=="<="){

 						blockcode = blockcode+ "ble\t" + reg1 + ", " + reg2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op==">="){

 						blockcode = blockcode+ "bge\t" + reg1 + ", " + reg2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op=="<"){

 						blockcode = blockcode+ "blt\t" + reg1 + ", " + reg2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op==">"){

 						blockcode = blockcode+ "bgt\t" + reg1 + ", " + reg2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op=="="){

 						blockcode = blockcode+ "beq\t" + reg1 + ", " + reg2 + ", " + "" + instr.target_label+ "\n";
 					}

 					if (instr.op=="!="){

 						blockcode = blockcode+ "bne\t" + reg1 + ", " + reg2 + ", " + "" + instr.target_label+ "\n";
 					}

					setregister(reg1, instr.in1);
				    setlocation(instr.in1, reg1);

				    setregister(reg2, instr.in2);
				    setlocation(instr.in2, reg2);
				}

			}

	}
	//new
	else if(instr.type=="function"){
		label_ret=1;
		blockcode = blockcode + instr.op + ":\n\t";
		blockcode = blockcode + "addi\t$sp,$sp,-4\n";//\t";	//new
		//blockcode = blockcode + "sw\t$t0, 0($sp)\n";
		blockcode = blockcode + "sw\t$ra,0($sp)\n";
	}
	//new
	else if(instr.type=="label"){
		//label_ret=1;
		blockcode = blockcode + instr.op + ":\n\t";
		//blockcode = blockcode + "addi\t$sp,$sp,-4\n\t";
		//blockcode = blockcode + "sw\t$t0, 0($sp)\n";
	}

	else if(instr.type=="return1"){

			if(label_ret==0){

				blockcode = blockcode+"li \t$v0, 10"  + "\n" + "syscall"  + "\n" ;     // \oad 10(exit) for syscall
			}

			if(label_ret==1){
				//new
				blockcode = blockcode + "lw\t$ra,0($sp)\n";
				blockcode = blockcode + /*"lw \t$t0, 0($sp)\n*/"addi \t$sp,$sp,4\n";
				blockcode = blockcode + /*"lw \t$t0, 0($sp)\n*/"addi \t$sp,$sp," + to_string(4*args_num) + "\njr \t$ra\n";
				label_ret=0;
				args_num = 0;
			}
	}

	else if(instr.type=="return2"){

		if(isInteger(instr.in1)){
			blockcode = blockcode + "addi \t$v0, $0, "+ instr.in1 + "\n";
		}else{

			loc1=getlocation(instr.in1);
			if(loc1!="mem"){

				blockcode = blockcode + "add \t$v0, $0, " + loc1 + "\n";
			}else{

				reg1=getReg(instr.in1,instr, symtab);
				setlocation(instr.in1,reg1);
				setregister(reg1,instr.in1);
				blockcode=blockcode+"lw \t$v0"+", "+instr.in1 + "\n";
			}
		}
	}
	//new
	else if(instr.type=="param"){

		if(isInteger(instr.in1)){
			blockcode = blockcode + "addi \t$t9, $0, "+ instr.in1 + "\n";
			//blockcode = blockcode + "sw\t$t9, -4($sp)\n";
			//blockcode = blockcode + "addi\t$sp, $sp, -4\n";
			blockcode = blockcode + "addi\t$sp, $sp, -4\n";
			blockcode = blockcode + "sw\t$t9, 0($sp)\n";

		}else{

			loc1=getlocation(instr.in1);
			if(loc1!="mem"){

				//blockcode = blockcode + "sw\t" + loc1 + ",-4($sp)\n";
				//blockcode = blockcode + "addi\t$sp, $sp, -4\n";
				blockcode = blockcode + "addi\t$sp, $sp, -4\n";
				blockcode = blockcode + "sw\t"+ loc1 + ", 0($sp)\n";
			}else{

				reg1=getReg(instr.in1,instr, symtab);
				setlocation(instr.in1,reg1);
				setregister(reg1,instr.in1);
				//blockcode = blockcode + "sw\t" + reg1 + ",-4($sp)\n";
				//blockcode = blockcode + "addi\t$sp, $sp, -4\n";
				blockcode=blockcode+"lw \t" + reg1 +", "+ instr.in1 + "\n";
				blockcode = blockcode + "addi\t$sp, $sp, -4\n";
				blockcode = blockcode + "sw\t"+ reg1 + ", 0($sp)\n";
			}
		}
	}

	else if(instr.type=="pop"){

		//if(isInteger(instr.in1)){
		reg1=getReg(instr.in1,instr, symtab);
		setlocation(instr.in1,reg1);
		setregister(reg1,instr.in1);
		//blockcode = blockcode + "addi \t$t9, $0, "+ instr.in1 + "\n";
		blockcode = blockcode + "lw\t" + reg1 + "," + to_string(4*stoi(instr.in2)) + "($sp)\n";
		//blockcode = blockcode + "addi\t$sp, $sp, -4\n";
	}

	else if(instr.type=="scan"){

		loc1 = getlocation(instr.out);
		if(loc1=="mem"){
			reg1 = getReg(instr.out,instr, symtab);
			setlocation(instr.out,reg1);
			setregister(reg1,instr.out);
			//blockcode = blockcode + "lw\t" + reg1 + ", " + instr.out + "\n";
		}
		else reg1 = loc1;
		blockcode = blockcode + "li\t$v0, 5\n"+ "syscall\n" + "move\t" + reg1 + " ,$v0\n" ;
	}

	else if(instr.type=="args_num"){
		args_num = stoi(instr.in1);
	}

	//new

	//getreturn
	else if(instr.type=="getreturn"){
		loc1=getlocation(instr.in1);
		if(loc1!="mem"){
			reg1 = loc1;
			blockcode = blockcode + "move \t" + reg1 + ", $v0" + "\n";
		}else{

			reg1=getReg(instr.in1,instr, symtab);
			setlocation(instr.in1,reg1);
			setregister(reg1,instr.in1);
			blockcode = blockcode + "move \t" + reg1 + ", $v0" + "\n";
		}
	}

	else if(instr.type=="print"){
			if(isInteger(instr.in1)){
				blockcode = blockcode + "li\t$v0, 1\nli\t$a0, " + instr.in1 + "\n" + "syscall\n";
			}
			else if(is_string_var(instr.in1)){
				blockcode = blockcode + "li\t$v0, 4\nla\t$a0, " + instr.in1 + "\n" + "syscall\n";
			}
			else{
				loc1 = getlocation(instr.in1);
				if(loc1=="mem"){
					reg1 = getReg(instr.in1,instr, symtab);
					setlocation(instr.in1,reg1);
					setregister(reg1,instr.in1);
					blockcode = blockcode + "lw\t" + reg1 + ", " + instr.in1 + "\n";
				}
				else reg1 = loc1;
				blockcode = blockcode + "li\t$v0, 1\nmove\t$a0, " + reg1 + "\n" + "syscall\n";
			}
	}

}
