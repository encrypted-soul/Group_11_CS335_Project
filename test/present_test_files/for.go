package main;
import "fmt";


func main() {
	fmt.Println("\n***** LOOPS *****\n\n");
	var x int = 1;
	fmt.Println("For loop eqv to While Loop in C\n");
	for x <= 3 {
		fmt.Println(x , "\n");
		x = x + 1;
	};

	var y int ;
	fmt.Println("Standard For loop of C\n");
	for y = 7; y <= 9; y++ {
		fmt.Println(y, "\n");
	};

	fmt.Println("For loop combined with If statement and continue Statement\n");
	var n int;
	for n = 0; n <= 5; n++ {
		if n%2 == 0 {
		    continue;
		};
		fmt.Println(n, "\n");
	};

	fmt.Println("For loop combined with complex control statements\n");
	var k int;
	for k = 0; k <= 5; k++ {
		if k%3 == 0  && k != 0{
		    break;
		}
		else if k %2 == 0 {
			continue;
		};
		fmt.Println(k, "\n");
	};



}