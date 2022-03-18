package main

import (
	"fmt"
	"time"
)

func main() {

	now := time.Now()
	fmt.Println(now.Format(time.RFC3339))

	t1, _ := time.Parse(time.RFC3339, "2012-11-01T22:08:41+00:00")
	fmt.Println(t1)

	// Format and Parse uses example-based layouts. Usually you’ll use a constant
	// from time for these layouts, but you can also supply custom layouts.
	// Layouts must use the reference time Mon Jan 2 15:04:05 MST 2006 to show
	// the pattern with which to format/parse a given time/string. The example
	// time must be exactly as shown: the year 2006, 15 for the hour, Monday for
	// the day of the week, etc.

	fmt.Println(now.Format("3:04PM"))
	fmt.Println(now.Format("15:04"))
	fmt.Println(now.Format("Mon Jan _2 15:04:05 2006"))
	fmt.Println(now.Format("2006-01-02T15:04:05.999999-07:00"))

	format := "3 04 PM"
	t2, _ := time.Parse(format, "8 41 PM")
	fmt.Println(t2.Format(format))

	fmt.Printf("%d-%02d-%02dT%02d:%02d:%02d-00:00\n",
		now.Year(), now.Month(), now.Day(),
		now.Hour(), now.Minute(), now.Second())

	// Parse will return an error on malformed input explaining the parsing
	// problem.

	ansic := "Mon Jan _2 15:04:05 2006"
	_, e := time.Parse(ansic, "8:41PM")
	fmt.Println(e)
}
