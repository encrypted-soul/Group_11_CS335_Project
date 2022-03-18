package main

import (
	"fmt"
	"time"
)

func main() {
	timer1 := time.NewTimer(time.Second * 2)

	<-timer1.C
	fmt.Println("Timer 1 expired")

	timer2 := time.NewTimer(time.Second * 2)

	go func() {
		<-timer2.C
		fmt.Println("Timer 2 expired")
	}()

	if stopped := timer2.Stop(); stopped {
		fmt.Println("Timer 2 stopped")
	}
}
