package main

import (
    "fmt"
    "strconv"
)

func main() {
    var distance float64
    fmt.Print("Enter a distance in meters: ")
    fmt.Scan(&distance)

    km := distance / 1000
    dam := distance / 10
    hm := distance / 100
    dm := distance * 10
    cm := distance * 100
    mm := distance * 1000

    fmt.Println("The distance of " + strconv.FormatFloat(distance, 'f', 1, 64) + "m corresponds to:")
    fmt.Printf("%.5fKm\n", km)
    fmt.Printf("%.4fDam\n", dam)
    fmt.Printf("%.4fHm\n", hm)
    fmt.Printf("%.1fDm\n", dm)
    fmt.Printf("%.0fCm\n", cm)
    fmt.Printf("%.0fMm\n", mm)
}
