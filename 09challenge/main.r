# Get the amount of money in the person's wallet (in Brazilian Real)
money_in_wallet <- as.numeric(readline("Enter the amount of money in your wallet (in Brazilian Real): "))

# Declare a variable to store the exchange rate
exchange_rate <- 3.45

# Calculate the amount of money in dollars
money_in_dollars <- money_in_wallet / exchange_rate

# Print the amount of money in dollars
cat("You can buy US$", money_in_dollars, "with the money in your wallet.\n")
