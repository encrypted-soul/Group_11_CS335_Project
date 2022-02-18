package main

import (
	"errors"
	"fmt"
)

func add3(n int) (int, error) {
	if n == 42 {
		return 0, errors.New("can't work with 42")
	}
	return n + 3, nil
}

type notVaildArgumentError struct {
	argument int
	why      string
}

func (e *notVaildArgumentError) Error() string {
	return fmt.Sprintf("%d - %s", e.argument, e.why)
}

func add3WithCustomError(n int) (int, error) {
	if n == 42 {
		return 0, &notVaildArgumentError{argument: n, why: "can't work with it"}
	}
	return n + 3, nil
}

func main() {

	for _, i := range []int{7, 42} {
		if r, e := add3(i); e != nil {
			fmt.Println("add3 failed ->", e)
		} else {
			fmt.Println("add3 worked ->", r)
		}
	}

	for _, i := range []int{7, 42} {
		if r, e := add3WithCustomError(i); e != nil {
			fmt.Println("add3 failed ->", e)
		} else {
			fmt.Println("add3 worked ->", r)
		}
	}

	_, e := add3WithCustomError(42)
	if ae, ok := e.(*notVaildArgumentError); ok {
		fmt.Println("e.argument ->", ae.argument)
		fmt.Println("e.why ->", ae.why)
	}
}
