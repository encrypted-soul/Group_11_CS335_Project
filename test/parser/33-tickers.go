package main

import (
	"fmt"
	"time"
)

func main() {
	ticker := time.NewTicker(time.Millisecond * 100)

	go func() {
		for tick := range ticker.C {
			fmt.Println("Tick at", tick)
		}
	}()

	time.Sleep(time.Second)
	ticker.Stop()
	fmt.Println("Ticker stopped")
}
