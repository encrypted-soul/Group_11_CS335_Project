package main

import (
	"encoding/json"
	"fmt"
)

type Response struct {
	Page   int
	Fruits []string
}

type ResponseWithTags struct {
	Page   int      `json:"page"`
	Fruits []string `json:"fruits"`
}

func main() {
	booleanAsJSON, _ := json.Marshal(true)
	fmt.Println("boolean", string(booleanAsJSON))

	integerAsJSON, _ := json.Marshal(1)
	fmt.Println("integer", string(integerAsJSON))

	floatAsJSON, _ := json.Marshal(42.42)
	fmt.Println("float", string(floatAsJSON))

	stringAsJSON, _ := json.Marshal("gopher")
	fmt.Println("string", string(stringAsJSON))

	sliceOfStringsAsJSON, _ := json.Marshal([]string{"apple", "peach", "pear"})
	fmt.Println("slice:", string(sliceOfStringsAsJSON))

	mapFromStringsToIntegers, _ := json.Marshal(map[string]int{"apple": 5, "lettuce": 7})
	fmt.Println("map:", string(mapFromStringsToIntegers))

	res1 := &Response{Page: 1, Fruits: []string{"apple", "peach", "pear"}}
	res1AsJSON, _ := json.Marshal(res1)
	fmt.Println("response:", string(res1AsJSON))

	res2 := &ResponseWithTags{Page: 2, Fruits: []string{"apple", "peach", "pear"}}
	res2AsJSON, _ := json.Marshal(res2)
	fmt.Println("response with annotations:", string(res2AsJSON))

	bytesInInput := []byte(`{"num":6.13,"strs":["a","b"]}`)

	// We need to provide a variable where the JSON package can put the decoded
	// data. This map[string]interface{} will hold a map of strings to arbitrary
	// data types.

	var data map[string]interface{}

	if err := json.Unmarshal(bytesInInput, &data); err != nil {
		panic(err)
	}
	fmt.Println(data)

	// Accessing nested data requires a series of casts.
	num := data["num"].(float64)
	fmt.Println(num)

	// We can also decode JSON into custom data types. This has the advantages of
	// adding additional type-safety to our programs and eliminating the need for
	// type assertions when accessing the decoded data.

	stringInInput := `{"page": 1, "fruits": ["apple", "peach"]}`
	res := &ResponseWithTags{}
	json.Unmarshal([]byte(stringInInput), &res)
	fmt.Println(res)
	fmt.Println(res.Fruits)
}
