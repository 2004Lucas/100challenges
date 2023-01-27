cigarettes_per_day <- as.numeric(readline("Number of cigarettes smoked per day: "))
years_smoking <- as.numeric(readline("Number of years smoking: "))
minutes_lost_per_cigarette <- 10
minutes_lost_per_day <- cigarettes_per_day * minutes_lost_per_cigarette
days_lost_per_year <- minutes_lost_per_day / (24 * 60)
total_days_lost <- days_lost_per_year * years_smoking
print(paste0("The smoker will lose a total of ", total_days_lost, " days of life."))
