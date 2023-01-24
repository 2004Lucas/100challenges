from math import sqrt

class Equation:
    def __init__(self, a:float, b:float, c:float):
        self.a = a
        self.b = b
        self.c = c
    
    def delta(self):
        return (self.b ** 2) - (4 * self.a * self.c)
    
    def __str__(self):
        return f'Equation is: {self.a}x^2 + {self.b}x + {self.c} = 0, Delta = {self.delta()}'
    

eq = Equation(a=float(input("Enter the value of A: ")),
              b=float(input("Enter the value of B: ")),
              c=float(input("Enter the value of C: "))
             )

print(eq)
