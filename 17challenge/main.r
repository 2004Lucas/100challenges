speed <- as.numeric(readline("Enter the car's speed: "))
limit <- 80

if (speed > limit) {
  fine <- 5 * (speed - limit)
  print(paste0("You have been fined $", fine, " for exceeding the speed limit."))
}
