package main;


func main() {
	var i int = 0;
	var a[3] int;
	a[0]=1;
	a[1]=2;
	a[2]=3;
	if (i<=3) {
	    a[i] = a[i] + 1;
	};
	if (i>=2){
	    a[i]=a[i] - 1;
	}else{
	    a[i] = 1;
	 };
}