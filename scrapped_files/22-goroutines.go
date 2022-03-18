package main

import "fmt"

func f(from string) {
	for i := 0; i <= 3; i++ {
		fmt.Println(from, ":", i)
	}
}

func main() {
	f("direct")

	go f("goroutine")

	go func(message string) {
		fmt.Println(message)
	}("anonymous goroutine")

	var input string
	fmt.Scanln(&input)
	fmt.Println("done with", input)
}
