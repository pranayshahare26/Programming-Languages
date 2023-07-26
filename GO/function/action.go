package main

func calculate(a int, b int, action string)int{
	var result int
	if action == "+" {
		result = a + b
	} else if action == "-" {
		result = a - b
	} else if action == "*" {
		result = a * b
	} else if action == "/" {
		result = a / b
	}
	return result
}