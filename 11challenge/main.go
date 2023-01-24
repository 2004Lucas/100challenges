package main

import (
	"fmt"
	"strconv"
)

type Equation struct {
	a, b, c float64
	equation string
	delta float64
}

func (eq *Equation) calculateDelta() {
	eq.delta = (eq.b * eq.b) - 4 * eq.a * eq.c
}

func (eq *Equation) setEquation() {
	eq.equation = strconv.FormatFloat(eq.a, 'f', -1, 64) + "x^2 + " + strconv.FormatFloat(eq.b, 'f', -1, 64) + "x + " + strconv.FormatFloat(eq.c, 'f', -1, 64) + " = 0"
}

func (eq *Equation) String() string {
	return fmt.Sprintf("Equation: %s\nDelta: %.2f", eq.equation, eq.delta)
}

func main() {
	var a, b, c float64
	fmt.Print("Enter the value of A: ")
	fmt.Scan(&a)
	fmt.Print("Enter the value of B: ")
	fmt.Scan(&b)
	fmt.Print("Enter the value of C: ")
	fmt.Scan(&c)
	
	eq := &Equation{a: a, b: b, c: c}
	eq.calculateDelta()
	eq.setEquation()
	fmt.Println(eq)
}
