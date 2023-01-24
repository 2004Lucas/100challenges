days <- as.integer(readline("Enter the number of days the car was rented: "))
kilometers <- as.integer(readline("Enter the number of kilometers driven: "))
cost_per_day <- 90
cost_per_kilometer <- 0.20

total_cost <- (days * cost_per_day) + (kilometers * cost_per_kilometer)
cat("Total cost to be paid: R$", round(total_cost, 2), "\n")
