package main

import (
	"fmt"
	s "strings"
)

var p = fmt.Println

func main() {
	p("Contains:", s.Contains("test", "es"))
	p("Count:", s.Count("test", "t"))
	p("HasPrefix:", s.HasPrefix("test", "te"))
	p("HasSuffix:", s.HasSuffix("test", "st"))
	p("Index:", s.Index("test", "e"))
	p("Join:", s.Join([]string{"this", "is", "a", "test"}, "-"))
	p("Repeat:", s.Repeat("NaN", 5))
	p("Replace:", s.Replace("foo", "o", "O", -1))
	p("Replace:", s.Replace("foo", "o", "O", 1))
	p("Split:", s.Split("this-is-a-test", "-"))
	p("ToLower:", s.ToLower("TEST"))
	p("ToUpper:", s.ToUpper("test"))
	p("len:", len("hello"))
	p("[1]:", "hello"[1])
}
