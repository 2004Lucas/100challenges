package main

import (
    "fmt"
)

func main() {
    // Declare a variable to store the amount of money in the person's wallet (in Brazilian Real)
    var money_in_wallet float64

    // Get the amount of money in the person's wallet (in Brazilian Real)
    fmt.Print("Enter the amount of money in your wallet (in Brazilian Real): ")
    fmt.Scan(&money_in_wallet)

    // Declare a variable to store the exchange rate
    exchange_rate := 3.45

    // Calculate the amount of money in dollars
    money_in_dollars := money_in_wallet / exchange_rate

    // Print the amount of money in dollars
    fmt.Printf("You can buy US$%.2f with the money in your wallet.\n", money_in_dollars)
}
