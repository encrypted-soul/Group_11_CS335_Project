package main

import "fmt"

func plus(a int, b int) int {
	return a + b
}

func main() {
	fmt.Println("3 + 4 =", plus(3, 4))
}
