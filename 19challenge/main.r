students <- list(
  list(name = "John", grade1 = 8.5, grade2 = 7.3),
  list(name = "Mike", grade1 = 6.5, grade2 = 8.0),
  list(name = "Sara", grade1 = 9.0, grade2 = 9.5)
)

for (i in 1:length(students)) {
  student <- students[[i]]
  average <- (student$grade1 + student$grade2) / 2
  print(paste(student$name, "'s average: ", average))
  if (average > 7) {
    print(paste(student$name, " had a good performance"))
  }
}
