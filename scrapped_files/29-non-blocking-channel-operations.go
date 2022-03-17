package main

import "fmt"

func main() {
	messages := make(chan string)
	signals := make(chan bool)

	// Non blocknig receive

	select {
	case message := <-messages:
		fmt.Println("received:", message)
	default:
		fmt.Println("received nothing")
	}

	// Non blocking send

	message := "Hey You!"
	select {
	case messages <- message:
		fmt.Println("sent:", message)
	default:
		fmt.Println("sent nothing")
	}

	// Multiway non blocking receive

	select {
	case message := <-messages:
		fmt.Println("received message:", message)
	case signal := <-signals:
		fmt.Println("received signal:", signal)
	default:
		fmt.Println("received nothing")
	}
}
