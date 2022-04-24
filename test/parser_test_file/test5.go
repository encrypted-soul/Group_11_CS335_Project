package main;

import "fmt";


func plus(a1 int, b1 int) int {

    return a1 + b1;

};

func plusPlus(a2 int, b2 int, c2 int) int {
    	return a2 + b2 + c2;
};

func main() {
    	var x int;
    	for x=7;x>2;x=x+1 {
    	if(x%2==0){
    			var k int := plusPlus(x,x,x);
    			fmt.Println("\nx is even\tand ", k, " is the sum\n");
    		}
    		else{
    			var p int := plus(x,4);
    			print("\np = \t",p,"\n");
    			for p>8 {
    				fmt.Println("\nx is odd\t and ", p, " is the sum\n");
    				if(p%2==1){
    					fmt.Println("\np is odd and\t", p, " is the value\n");
    				};
    				p--;
    			};
    		};
    	};
}
