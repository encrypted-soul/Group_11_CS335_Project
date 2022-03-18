package main

import (
	"fmt"
	"strings"
)

// We often need our programs to perform operations on collections of data,
// like selecting all items that satisfy a given predicate or mapping all items
// to a new collection with a custom function.

// In some languages it’s idiomatic to use generic data structures and
// algorithms. Go does not support generics; in Go it’s common to provide
// collection functions if and when they are specifically needed for your
// program and data types.

// Here are some example collection functions for slices of strings. You can
// use these examples to build your own functions. Note that in some cases it
// may be clearest to just inline the collection-manipulating code directly,
// instead of creating and calling a helper function.

func Index(strs []string, s string) int {
	for i, v := range strs {
		if v == s {
			return i
		}
	}
	return -1
}

func Include(strs []string, s string) bool {
	return Index(strs, s) >= 0
}

func Any(strs []string, f func(string) bool) bool {
	for _, v := range strs {
		if f(v) {
			return true
		}
	}
	return false
}

func All(strs []string, f func(string) bool) bool {
	for _, v := range strs {
		if !f(v) {
			return false
		}
	}
	return true
}

func Filter(strs []string, f func(string) bool) []string {
	filtered := make([]string, 0)
	for _, v := range strs {
		if f(v) {
			filtered = append(filtered, v)
		}
	}
	return filtered
}

func Map(strs []string, f func(string) string) []string {
	mapped := make([]string, len(strs))
	for i, v := range strs {
		mapped[i] = f(v)
	}
	return mapped
}

func main() {
	strs := []string{"peach", "apple", "pear", "plum"}

	fmt.Println(Index(strs, "pear"))
	fmt.Println(Include(strs, "grape"))

	fmt.Println(Any(strs, func(v string) bool {
		return strings.HasPrefix(v, "p")
	}))

	fmt.Println(All(strs, func(v string) bool {
		return strings.HasPrefix(v, "p")
	}))

	fmt.Println(Filter(strs, func(v string) bool {
		return strings.Contains(v, "e")
	}))

	fmt.Println(Map(strs, strings.ToUpper))
}
