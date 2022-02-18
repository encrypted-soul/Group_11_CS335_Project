package main

import "fmt"

func main() {

	m := make(map[string]int)
	fmt.Println("m ->", m)

	m["a"] = 1
	m["b"] = 2
	fmt.Println("m ->", m)
	fmt.Println("len(m) ->", len(m))

	v := m["a"]
	fmt.Println("v ->", v)

	delete(m, "b")
	fmt.Println("m ->", m)

	value, foundInMap := m["b"]
	fmt.Println("value, foundInMap ->", value, foundInMap)

	n := map[string]int{"foo": 1, "bar": 2}
	fmt.Println("n ->", n)
}
