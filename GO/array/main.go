package main
import ("fmt")


func main(){
	var n[10]int
	var i, j int
	for i=0; i<10; i++{
		n[i] = i + 100
	}

	for j=0; j<10; j++{
		fmt.Printf("Element[%d] = %d\n", j, n[j])
	}

	var x[]int
	fmt.Printf("len=%d slice=% slice=%d\n", len(x), cap(x), x)
	numbers := make([]int, 3, 5)
	fmt.Printf("len=%d slice=% slice=%d", len(numbers), cap(numbers), numbers)
	odd := [6]int{2,4,6,8,10,12}
	s := odd[1:4]
	fmt.Println(s)
}