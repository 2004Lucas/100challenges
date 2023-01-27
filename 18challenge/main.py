birth_year = int(input("Enter birth year: "))
age = 2022 - birth_year

eligibility = "can vote" if age >= 18 else "cannot vote"

print(f"Age: {age}, Eligibility: {eligibility}")
