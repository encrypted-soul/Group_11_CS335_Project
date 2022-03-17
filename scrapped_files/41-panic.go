package main

import "os"

func main() {
	panic("Something terrible happend")

	if _, err := os.Create("/tmp/file"); err != nil {
		panic(err)
	}
}
