days <- as.integer(readline("Enter the number of days worked in a month: "))
cost_per_hour <- 25

total_cost <- (days * 8) * cost_per_hour
cat("Total salary: R$", round(total_cost, 2), "\n")
