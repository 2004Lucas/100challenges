birth_year <- as.integer(readline(prompt="Enter birth year: "))
age <- 2022 - birth_year

eligibility <- ifelse(age >= 18, "can vote", "cannot vote")

cat(paste("Age: ", age, ", Eligibility: ", eligibility))
