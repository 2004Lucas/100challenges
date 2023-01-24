days = int(input("Enter the number of days worked in a month: "))
cost_per_hour = 25

total_cost = sum([days * 8 * cost_per_hour])
print(f'Total salary: R${total_cost:.2f}')
