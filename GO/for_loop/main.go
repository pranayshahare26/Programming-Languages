package main
import ("fmt")


func main(){
	fruits := [3]string{"apple", "orange", "banana"}
	for i := 0; i < len(fruits); i++ {
		fmt.Println(fruits[i])
	}
	for _, val := range fruits{
		fmt.Printf("%v\n", val)
	}
}