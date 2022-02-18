package main

import "fmt"

func sequenceStartingAt(counter int) func() int {
	return func() int {
		counter += 1
		return counter
	}
}

func main() {
	next := sequenceStartingAt(0)
	fmt.Println("next", next())
	fmt.Println("next", next())
	fmt.Println("next", next())

	next = sequenceStartingAt(0)
	fmt.Println("next", next())
}
