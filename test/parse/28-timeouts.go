package main

import (
	"fmt"
	"time"
)

func main() {

	c1 := make(chan string)

	go func() {
		time.Sleep(time.Second * 2)
		c1 <- "one"
	}()

	select {
	case message := <-c1:
		fmt.Println("channel-1:", message)
	case <-time.After(time.Second * 1):
		fmt.Println("channel-1: timeout")
	}

	c2 := make(chan string)

	go func() {
		time.Sleep(time.Second * 2)
		c2 <- "two"
	}()

	select {
	case message := <-c2:
		fmt.Println("channel-2:", message)
	case <-time.After(time.Second * 3):
		fmt.Println("channel-2: timeout")
	}

}
