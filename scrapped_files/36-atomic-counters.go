package main

import (
	"fmt"
	"runtime"
	"sync/atomic"
	"time"
)

func main() {
	var counter uint64

	for i := 0; i <= 50; i++ {
		go func() {
			for {
				atomic.AddUint64(&counter, 1)
				runtime.Gosched()
			}
		}()
	}

	runtime.Gosched()
	time.Sleep(time.Second)

	countedUpTo := atomic.LoadUint64(&counter)
	fmt.Println("Counted up to:", countedUpTo)
}
