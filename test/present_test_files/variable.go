package main;

import "fmt";

func main() {
	fmt.Println("\n***** VARIABLES *****\n\n");

	// simple assignment
	var a int = 2;
	fmt.Println("Simple assignment\n");
	fmt.Println(a, "\n");

	// multiple assignment at once
	fmt.Println("List assignment\n");
	var c, d int = 1,2;
	fmt.Println(c," ", d , "\n");

}
