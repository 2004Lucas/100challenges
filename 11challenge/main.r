equation <- function(a,b,c){
  delta <- (b^2) - (4*a*c)
  equation_string <- paste(a,"x^2 +",b,"x +",c," = 0")
  list(equation = equation_string, delta = delta)
}

eq <- equation(as.numeric(readline("Enter the value of A: ")),
               as.numeric(readline("Enter the value of B: ")),
               as.numeric(readline("Enter the value of C: "))
              )

print(eq)
