package main;
import "fmt";
func main() {

    var i int = 1;
    for ;i <= 3; {
        fmt.Println(i,"\t");
        i = i + 1;
    };
    fmt.Println("\n");

    var k int;

    for k = 7; k <= 9; k++ {
        fmt.Println(k,"\t");
    };
    fmt.Println("\n");

    var n int;
    for n = 0; n <= 5; n++ {
        if (n%2 == 0) {
            continue;
        };
        fmt.Println(n,"\t");
    };
    fmt.Println("\n");
}
