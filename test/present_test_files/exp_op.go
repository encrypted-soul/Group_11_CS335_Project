package main;

import "fmt";

func main() {
	fmt.Println("\n***** Expressions and Operators *****\n\n");

	var x int = 1 + 2/3*4 + 3 - 5;
	fmt.Println("1 + 2/3*4 + 3 - 5 = ", x, "\n");
	var y int = (1 - 2 + 3) / (4 * 5 / 6);
	fmt.Println("(1 - 2 + 3) / (4 * 5 / 6) = ", y, "\n");

}
