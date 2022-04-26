package main;

import "fmt";

func main() {

	fmt.Println("***** IF ELSE STATEMENTS *****\n\n");

	fmt.Println("Simple If statement\n");
	if 8%4 == 0 {
		fmt.Println("8 is divisible by 4\n");
	};

	fmt.Println("Simple If else statement\n");
	if 7%2 == 0 {
		fmt.Println("7 is even\n");
	} else {
		fmt.Println("7 is odd\n");
	};

	fmt.Println("Complex If else Statement\n");
	var num int = 9;
	if num < 0 {
		fmt.Println(num, " is negative\n");
	} else if num < 10 {
		fmt.Println(num, " has 1 digit\n");
	} else {
		fmt.Println(num, " has multiple digits\n");
	};
}
