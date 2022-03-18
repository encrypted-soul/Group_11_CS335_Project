package main

// By default channels are unbuffered, meaning that they will only accept sends
// (chan <-) if there is a corresponding receive (<- chan) ready to receive the
// sent value. Buffered channels accept a limited number of values without a
// corresponding receiver for those values

import "fmt"

func main() {

	messages := make(chan string, 2)

	messages <- "first message" // Here would block if unbuffered
	messages <- "second message"

	fmt.Println(<-messages)
	fmt.Println(<-messages)
}
