package main

import "fmt"

func sum(numbers ...int) {
	fmt.Println("numbers ->", numbers)
	sum := 0
	for _, number := range numbers {
		sum += number
	}
	fmt.Println("sum -> ", sum)
}

func main() {
	sum(1)
	sum(1, 2)
	sum(1, 2, 3)

	// If you already have multiple arguments in a slice
	// you can splat it with ...
	arguments := []int{1, 2, 3, 4}
	sum(arguments...)
}
