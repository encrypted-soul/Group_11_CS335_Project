package main

import "fmt"

func main() {

	s := make([]string, 3)
	fmt.Println("s ->", s)

	s[0] = "a"
	s[1] = "b"
	s[2] = "c"
	fmt.Println("s ->", s)
	fmt.Println("s[0] ->", s[0])
	fmt.Println("len(s) ->", len(s))

	s = append(s, "d")
	s = append(s, "e", "f")
	fmt.Println("s ->", s)

	c := make([]string, len(s))
	copy(c, s)
	fmt.Println("c ->", c)

	l := c[2:5]
	fmt.Println("l ->", l)

	l = s[:5]
	fmt.Println("l ->", l)

	l = s[2:]
	fmt.Println("l ->", l)

	// it would have been an array
	// t := [3]string{"g", "h", "i"}
	t := []string{"g", "h", "i"}
	fmt.Println("t ->", t)

	d := make([][]int, 3)
	for i := 0; i < 3; i++ {
		innerSliceLength := i + 1
		d[i] = make([]int, innerSliceLength)
		for j := 0; j < innerSliceLength; j++ {
			d[i][j] = i + j
		}
	}
	fmt.Println("d ->", d)
}
