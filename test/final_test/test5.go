package main;
import "fmt";
func main() {

    var i int;
    var k int;
    var twoD int = 1;
    for i = 0; i < 2; i++ {
        for k = 0; k < 3; k++ {
            twoD = twoD +  i + k;
        };
    };
    fmt.Println("2d: ", twoD,"\n");
}
