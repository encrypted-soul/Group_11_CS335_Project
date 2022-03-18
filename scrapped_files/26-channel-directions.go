package main

import "fmt"

// When using channels as function parameters, you can
// specify if a channel is meant to only send or receive
// values. This specificity increases the type-safety of
// the program.

// `pings chan<- string` is a channel only ment to send messages
func ping(pings chan<- string, message string) {
	pings <- message
}

// `pings <-chan string` is a channel only ment to receive messages
func pong(pings <-chan string, pongs chan<- string) {
	message := <-pings
	pongs <- message
}

func main() {
	// make(chan string) is equivalent to make(chan string, 0)
	// make(chan string, 1) accept 1 message in the buffer before blocking
	pings := make(chan string, 1)
	pongs := make(chan string, 1)
	ping(pings, "this is a message")
	pong(pings, pongs)
	fmt.Println("received:", <-pongs)
}
