package main

import "fmt"

func values() (int, int) {
	return 3, 7
}

func main() {
	a, b := values()
	fmt.Println("values -> ", a, b)

	// _ it's called the blank identifier

	d, _ := values()
	fmt.Println("first value -> ", d)

	_, c := values()
	fmt.Println("second value -> ", c)

	// The following statement produces a compile time error
	// e := values()
}
