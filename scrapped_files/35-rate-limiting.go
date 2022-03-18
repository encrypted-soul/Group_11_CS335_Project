package main

import (
	"fmt"
	"time"
)

func main() {
	requests := make(chan int, 5)
	for i := 1; i <= 5; i++ {
		requests <- i
	}
	close(requests)

	limiter := time.Tick(time.Millisecond * 200)

	for request := range requests {
		// By blocking on a receive from the limiter channel before serving each
		// request, we limit ourselves to 1 request every 200 milliseconds.
		<-limiter
		fmt.Println("Request", request, time.Now())
	}

	// We may want to allow short bursts of requests in our rate limiting scheme
	// while preserving the overall rate limit. We can accomplish this by buffering
	// our limiter channel. This burstyLimiter channel will allow bursts of up to 3
	// events.
	burstyLimiter := make(chan time.Time, 5)

	for i := 1; i <= 5; i++ {
		burstyLimiter <- time.Now()
	}

	go func() {
		for t := range time.Tick(time.Millisecond * 200) {
			burstyLimiter <- t
		}
	}()

	burstyRequests := make(chan int, 10)
	for i := 1; i <= 10; i++ {
		burstyRequests <- i
	}
	close(burstyRequests)

	for request := range burstyRequests {
		<-burstyLimiter
		fmt.Println("Request with burst allowed", request, time.Now())
	}
}
