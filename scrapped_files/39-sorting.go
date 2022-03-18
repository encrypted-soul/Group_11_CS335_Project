package main

import (
	"fmt"
	"sort"
)

func main() {
	strings := []string{"c", "b", "a"}
	sort.Strings(strings)
	fmt.Println("Strings:", strings)

	integers := []int{7, 2, 4}
	sort.Ints(integers)
	fmt.Println("Integers:", integers)

	fmt.Println("Integers are sorted?", sort.IntsAreSorted(integers))
}
