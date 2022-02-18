package main

import (
	"fmt"
	"time"
)

func worker(done chan bool) {
	fmt.Println("worker: working...")
	time.Sleep(time.Second)
	fmt.Println("worker: done")
	done <- true
}

func main() {
	done := make(chan bool)
	go worker(done)
	fmt.Println("main: waiting for worker...")
	<-done
	fmt.Println("main: done")
}
