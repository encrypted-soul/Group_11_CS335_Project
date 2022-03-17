package main

import (
	"fmt"
	"time"
)

// Go’s select lets you wait on multiple channel operations. Combining
// goroutines and channels with select is a powerful feature of Go.

func main() {

	c1 := make(chan string)
	c2 := make(chan string)

	go func() {
		time.Sleep(time.Second * 1)
		c1 <- "one"
	}()

	go func() {
		time.Sleep(time.Second * 2)
		c2 <- "two"
	}()

	for i := 1; i <= 2; i++ {
		select {
		case message1 := <-c1:
			fmt.Println("received:", message1)
		case message2 := <-c2:
			fmt.Println("received:", message2)
		}
	}
}
