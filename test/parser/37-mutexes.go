package main

import (
	"fmt"
	"math/rand"
	"runtime"
	"sync"
	"sync/atomic"
	"time"
)

func main() {
	var state = make(map[int]int)
	var mutex = &sync.Mutex{}
	var reads, writes int64

	for r := 0; r < 100; r++ {
		go func() {
			total := 0
			for {
				key := rand.Intn(5)
				mutex.Lock()
				total += state[key]
				mutex.Unlock()
				atomic.AddInt64(&reads, 1)

				// In order to ensure that this goroutine doesn’t starve the scheduler,
				// we explicitly yield after each operation with runtime.Gosched().
				// This yielding is handled automatically with e.g. every channel
				// operation and for blocking calls like time.Sleep, but in this case
				// we need to do it manually.
				runtime.Gosched()
			}
		}()
	}

	for w := 0; w < 10; w++ {
		go func() {
			for {
				key := rand.Intn(5)
				value := rand.Intn(100)
				mutex.Lock()
				state[key] = value
				mutex.Unlock()
				atomic.AddInt64(&writes, 1)
				runtime.Gosched()
			}
		}()
	}

	time.Sleep(time.Second)

	numberOfReads := atomic.LoadInt64(&reads)
	numberOfWrites := atomic.LoadInt64(&writes)
	fmt.Println("Number of reads:", numberOfReads)
	fmt.Println("Number of writes:", numberOfWrites)
	fmt.Println("Number of operations:", numberOfReads+numberOfWrites)

	mutex.Lock()
	fmt.Println("State:", state)
	mutex.Unlock()
}
