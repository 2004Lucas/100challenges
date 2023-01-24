class Product:
    def __init__(self, price:float):
        self.price = price
        self.discount = 0.05
        self.final_price = self.price - (self.price * self.discount)
    
    def __str__(self):
        return f'Product price: {self.price:.2f} €\nPromotional price: {self.final_price:.2f} €'
    

product = Product(price = float(input("Enter the price of the product: ")))
print(product)
