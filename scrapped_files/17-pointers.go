package main

import "fmt"

func zeroValue(value int) {
	value = 0
}

func zeroPointer(value *int) {
	*value = 0
}

func main() {
	value := 1
	fmt.Println("value -> ", value)
	fmt.Println("pointer of value ->", &value)

	zeroValue(value)
	fmt.Println("value -> ", value)

	zeroPointer(&value)
	fmt.Println("value -> ", value)
}
