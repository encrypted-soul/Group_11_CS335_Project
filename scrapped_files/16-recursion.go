package main

import "fmt"

func factorial(n int) int {
	switch {
	case n < 0:
		return 0
	case n == 0:
		return 1
	default:
		return n * factorial(n-1)
	}
}

func main() {
	fmt.Println("factorial(10)", factorial(10))
	fmt.Println("factorial(-10)", factorial(-10))
}
