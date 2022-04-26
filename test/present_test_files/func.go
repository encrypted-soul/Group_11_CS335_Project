package main;

import "fmt";

func rec(x int) {

  if( x <= 0) {
	  fmt.Println("Enter Positive Numbers only\n");
	  return;
  };

  if (x == 1) {
	fmt.Println(1, "\n");
	return;
  };

  fmt.Println(x, "\n");
  var a int = x - 1;
  rec(a);

};

func plus(a1 int, b1 int) int {
	return a1 + b1;
};

func plusPlus(a2 int, b2 int, c2 int) int {
	return a2 + b2 + c2;
};

func main() {
	fmt.Println("\n***** FUNCTION *****\n\n");

	fmt.Println("Simple Function with 2 Args\n");
	var i , x int = 7, 8 ;
        var p int := plus(x,4);
	fmt.Println("plus(", x," ", 4, ") = ", p, "\n");

	fmt.Println("Simple Function with 3 Args\n");
	var y int = x + i;
        var k int := plusPlus(x,i,y);

	fmt.Println("plusPlus(", x," ", i," ", y, ") = ",k, "\n");

	fmt.Println("Minimal recursion\n");
	rec(10);
}