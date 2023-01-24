# Requesting the number of days and kilometers driven from the user
days = int(input("Enter the number of days the car was rented: "))
kilometers = int(input("Enter the number of kilometers driven: "))

# Setting the cost per day and cost per kilometer
cost_per_day = 90
cost_per_kilometer = 0.20

# Using list comprehension to sum the cost for days and kilometers driven
total_cost = sum([days * cost_per_day, kilometers * cost_per_kilometer])

# Printing the total cost with 2 decimal places
print(f'Total cost to be paid: R${total_cost:.2f}')
