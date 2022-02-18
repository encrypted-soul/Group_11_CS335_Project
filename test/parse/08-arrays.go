package main

import "fmt"

func main() {

	var a [5]int
	fmt.Println("empty ->", a)

	a[4] = 100
	fmt.Println("a[4] = 100 ->", a)
	fmt.Println("a[4] ->", a[4])

	fmt.Println("len(a) ->", len(a))

	b := [5]int{1, 2, 3, 4, 5}
	fmt.Println("b ->", b)

	var c [2][3]int
	for i := 0; i < 2; i++ {
		for j := 0; j < 3; j++ {
			c[i][j] = i + j
		}
	}
	fmt.Println("c ->", c)
}
