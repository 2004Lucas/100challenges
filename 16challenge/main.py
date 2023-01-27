cigarettes_per_day = int(input("Enter the number of cigarettes smoked per day: "))
years_smoked = int(input("Enter the number of years smoked: "))

minutes_lost_per_cigarette = 10
days_lost = sum(cigarettes_per_day * minutes_lost_per_cigarette for year in range(years_smoked)) / (24 * 60)

print("The smoker will lose {} days of life due to smoking.".format(days_lost))
