package main

import (
	"fmt"
	"math/rand"
	"sync/atomic"
	"time"
)

type readOp struct {
	key      int
	response chan int
}

type writeOp struct {
	key      int
	value    int
	response chan bool
}

func main() {
	var ops int64

	reads := make(chan *readOp)
	writes := make(chan *writeOp)

	// Here is the goroutine that owns the state, which is a map as in the previous
	// example but now private to the stateful goroutine. This goroutine repeatedly
	// selects on the reads and writes channels, responding to requests as they
	// arrive. A response is executed by first performing the requested operation
	// and then sending a value on the response channel resp to indicate success
	// (and the desired value in the case of reads).
	go func() {
		state := make(map[int]int)
		for {
			select {
			case read := <-reads:
				read.response <- state[read.key]
			case write := <-writes:
				state[write.key] = write.value
				write.response <- true
			}
		}
	}()

	for r := 0; r < 100; r++ {
		go func() {
			for {
				read := &readOp{
					key:      rand.Intn(5),
					response: make(chan int),
				}
				reads <- read
				<-read.response
				// No need for runtime.Gosched() call because the channel read
				// operation will have the same effect
				atomic.AddInt64(&ops, 1)
			}
		}()
	}

	for w := 0; w < 100; w++ {
		go func() {
			for {
				write := &writeOp{
					key:      rand.Intn(5),
					value:    rand.Intn(100),
					response: make(chan bool),
				}
				writes <- write
				<-write.response
				// No need for runtime.Gosched() call because the channel read
				// operation will have the same effect
				atomic.AddInt64(&ops, 1)
			}
		}()
	}

	time.Sleep(time.Second)
	fmt.Println("Number of operations:", atomic.LoadInt64(&ops))
}
