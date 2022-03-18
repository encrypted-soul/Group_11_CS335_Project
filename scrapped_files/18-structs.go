package main

import "fmt"

// Private types should be lowercase
type person struct {
	name string
	age  int
}

func main() {

	fmt.Println(person{"Bob", 21})
	fmt.Println(person{name: "Alice", age: 30})
	fmt.Println(person{name: "Fred"})
	fmt.Println(&person{name: "Ann", age: 49})

	p := person{name: "Sean", age: 50}
	fmt.Println("p.name ->", p.name)
	fmt.Println("p.age ->", p.age)

	pp := &p
	fmt.Println("pp.age ->", pp.age)

	// Pointers are automatically dereferenced

	pp.age = 51
	fmt.Println("p.age ->", p.age)
}
