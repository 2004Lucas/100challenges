money_in_wallet = float(input("Enter the amount of money in your wallet (in Brazilian Real): "))
exchange_rate = 3.45
money_in_dollars = money_in_wallet / exchange_rate
print("You can buy US$" + str(money_in_dollars) + " with the money in your wallet.")
