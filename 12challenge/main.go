package main

import "fmt"

type Product struct {
    price float64
    discount float64
    finalPrice float64
}

func (p *Product) calculateFinalPrice(){
    p.finalPrice = p.price - (p.price * p.discount)
}

func (p Product) printProduct(){
    fmt.Printf("Product price: %.2f\nPromotional price: %.2f\n",p.price,p.finalPrice)
}

func main() {
    var price float64
    fmt.Print("Enter the price of the product: ")
    fmt.Scan(&price)

    product := &Product{price:price,discount:0.05}
    product.calculateFinalPrice()
    product.printProduct()
}
