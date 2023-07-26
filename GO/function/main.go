package main
import ("fmt")


func main(){
	var a, b int
	fmt.Print("Enter two numbers: ")
	fmt.Scan(&a, &b)
  	fmt.Printf("%d + %d = %d\n", a, b, calculate(a, b, "+"))
	fmt.Printf("%d - %d = %d\n", a, b, calculate(a, b, "-"))
	fmt.Printf("%d * %d = %d\n", a, b, calculate(a, b, "*"))
	fmt.Printf("%d / %d = %d\n", a, b, calculate(a, b, "/"))
}