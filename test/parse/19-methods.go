package main

import "fmt"

type rectangle struct {
	width, height int
}

func (r *rectangle) area() int {
	return r.width * r.height
}

func (r *rectangle) perimeter() int {
	return (r.width * 2) + (r.height * 2)
}

func main() {
	r := rectangle{width: 10, height: 5}
	fmt.Println("rectangle", r)

	// Go automatically handles conversion between values and pointers for method
	// calls. You may want to use a pointer receiver type to avoid copying on
	// method calls or to allow the method to mutate the receiving struct.

	fmt.Println("area", r.area())
	fmt.Println("perimeter", r.perimeter())

	rp := &r
	fmt.Println("area", rp.area())
	fmt.Println("perimeter", rp.perimeter())
}
