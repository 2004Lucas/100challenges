speed = int(input("Enter the car's speed: "))
limit = 80

fine = [5 * (speed - limit) for speed in [speed] if speed > limit]
if fine:
    print(f"You have been fined ${fine[0]} for exceeding the speed limit.")
