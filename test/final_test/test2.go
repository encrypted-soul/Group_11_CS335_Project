package main;
import "fmt";
func main() {

    var i int = 1;
    for ;i <= 3; {
        fmt.Println(i);
        i = i + 1;
    };

    var j int;

    for j = 7; j <= 9; j++ {
        fmt.Println(j);
    };

    var n int;
    for n = 0; n <= 5; n++ {
        if (n%2 == 0) {
            continue;
        };
        fmt.Println(n);
    };
}
