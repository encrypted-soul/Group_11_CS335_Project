package main

import (
	"fmt"
	"os"
	"strings"
)

// Environment variables are a universal mechanism for conveying configuration
// information to Unix programs. Let’s look at how to set, get, and list
// environment variables

func main() {
	// To set a key/value pair, use os.Setenv. To get a value for a key, use
	// os.Getenv. This will return an empty string if the key isn’t present in
	// the environment.

	os.Setenv("FOO", "1")
	fmt.Println("FOO:", os.Getenv("FOO"))
	fmt.Println("BAR:", os.Getenv("BAR"))

	fmt.Println()
	for _, e := range os.Environ() {
		pair := strings.Split(e, "=")
		fmt.Println(pair[0])
	}
}
