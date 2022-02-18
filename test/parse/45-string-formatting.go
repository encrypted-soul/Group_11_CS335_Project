package main

import (
	"fmt"
)

type point struct {
	x, y int
}

func main() {
	p := point{1, 2}

	// v prints an instance of point struct
	fmt.Printf("%v\n", p)

	// +v prints also the field names
	fmt.Printf("%+v\n", p)

	// #v prints the source code
	fmt.Printf("%#v\n", p)

	// %T prints the type of a value
	fmt.Printf("%T\n", p)

	// %t formats boolean
	fmt.Printf("%t\n", true)

	// %d for standard base 10 formatting
	fmt.Printf("%d\n", 42)

	// %b prints a binary representation
	fmt.Printf("%b\n", 42)

	// %c prints the character corresponding to the given integer
	fmt.Printf("%c\n", 42)
	fmt.Printf("%c\n", 0xE000)

	// %x prints hex encoding
	fmt.Printf("%x\n", 42)

	// %f prints basic float formatting
	fmt.Printf("%f\n", 42.42)

	// %e and %E for scientific notation
	fmt.Printf("%e\n", 1234567.0001234567)
	fmt.Printf("%E\n", 1234567.0001234567)

	// %s prints basic string formatting
	fmt.Printf("%s\n", "hello")

	// %p prints quoted string s
	fmt.Printf("%q\n", "hello")
	// same as
	fmt.Printf("%s\n", "\"hello\"")

	// %x prints strings as utf-8 code points in hex encoding
	fmt.Printf("%x\n", "hello")

	// %p prints a pointer
	fmt.Printf("%p\n", &p)

	// width and precision
	fmt.Printf("|%6d|%6d|\n", 12, 345)
	fmt.Printf("|%6.2f|%6.2f|\n", 1.2, 3.45)

	// left justify
	fmt.Printf("|%-6.2f|%-6.2f|\n", 1.2, 3.45)

	// works also for strings
	fmt.Printf("|%6s|%6s|\n", "foo", "b")
	fmt.Printf("|%-6s|%-6s|\n", "foo", "b")
}
