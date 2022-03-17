package main

import (
	"fmt"
	"math"
)

type shape interface {
	area() float64
	perimeter() float64
}

type square struct {
	width, height float64
}

func (s square) area() float64 {
	return s.width * s.height
}

func (s square) perimeter() float64 {
	return 2*s.width + 2*s.height
}

type circle struct {
	radius float64
}

func (c circle) area() float64 {
	return math.Pi * c.radius * c.radius
}

func (c circle) perimeter() float64 {
	return 2 * math.Pi * c.radius
}

func measure(s shape) {
	fmt.Println("shape", s)
	fmt.Println("area", s.area())
	fmt.Println("perimeter", s.perimeter())
}

func main() {
	s := square{width: 3, height: 4}
	c := circle{radius: 5}

	measure(s)
	measure(c)
}
