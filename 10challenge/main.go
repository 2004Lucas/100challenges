package main

import (
	"fmt"
)

func main() {
	var width, height, area, paintNeeded float64
	fmt.Print("Enter the width of the wall: ")
	fmt.Scan(&width)
	fmt.Print("Enter the height of the wall: ")
	fmt.Scan(&height)

	area = width * height
	paintNeeded = area / 2

	fmt.Printf("The area to be painted is: %.2f square meters\n", area)
	fmt.Printf("The amount of paint needed is: %.2f liters", paintNeeded)
}
