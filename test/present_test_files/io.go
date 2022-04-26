package main;
import "fmt";
func main() {

   fmt.Println("\n***** IO STATEMENTS *****\n\n");
   var from,to,inc int;
   fmt.Println("Enter from: ");
   fmt.Scanln(from);

   fmt.Println("Enter to: ");
   fmt.Scanln(to);

   fmt.Println("Numbers from ", from, " to ", to , " : ");
   var i int;
   for i = from; i <= to; i++ {
       fmt.Println(i,"\t");
   };
   fmt.Println("\n");

   fmt.Println("Enter inc: ");
   fmt.Scanln(inc);



   var c int = from*to*inc;
   fmt.Println("from * to * inc = ", c , "\n" );

   fmt.Println("Enter three numbers one by one : \n");
   fmt.Scanln(from, to, inc);

   c = from * to * inc;
   fmt.Println("Product of three Numbers = ", c , "\n" );

}