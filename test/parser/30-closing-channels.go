package main

import (
	"fmt"
	"time"
)

func main() {
	jobs := make(chan int, 5)
	done := make(chan bool)

	go func() {
		for {
			j, more := <-jobs
			if more {
				fmt.Println("Received job", j)
				fmt.Println("Working...", j)
				time.Sleep(time.Millisecond * 200)
				fmt.Println("Done!", j)
			} else {
				fmt.Println("Received all jobs")
				done <- true
				break
			}
		}
	}()

	for j := 1; j <= 3; j++ {
		jobs <- j
		fmt.Println("Sent job", j)
	}
	close(jobs)
	fmt.Println("Sent all jobs")

	<-done
}
