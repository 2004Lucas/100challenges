students = [{"name": "John", "grade1": 8.5, "grade2": 7.3},
            {"name": "Mike", "grade1": 6.5, "grade2": 8.0},
            {"name": "Sara", "grade1": 9.0, "grade2": 9.5}]

for student in students:
    average = (student["grade1"] + student["grade2"]) / 2
    print(f'{student["name"]}\'s average: {average}')
    if average > 7.0:
        print(f'{student["name"]} had a good performance')
