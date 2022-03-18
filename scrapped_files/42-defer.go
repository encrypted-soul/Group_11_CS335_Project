package main

import (
	"fmt"
	"os"
)

func createFile(p string) *os.File {
	fmt.Println("Creating file")
	f, err := os.Create(p)
	if err != nil {
		panic(err)
	}
	return f
}

func writeFile(f *os.File) {
	fmt.Println("Writing file")
	fmt.Fprintln(f, "data")
}

func closeFile(f *os.File) {
	fmt.Println("Closing file")
	f.Close()
}

func main() {
	f := createFile("/tmp/defer.txt")
	// Immediately after getting a file object with createFile, we defer the
	// closing of that file with closeFile. This will be executed at the end of
	// the enclosing function (main), after writeFile has finished.
	defer closeFile(f)
	writeFile(f)
}
