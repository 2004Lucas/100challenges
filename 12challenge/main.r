productPrice <- as.numeric(readline(prompt="Enter the price of the product: "))
calculate_final_price <- function(price, discount = 0.05){
  return (price - (price*discount))
}
finalPrice <- calculate_final_price(productPrice)
print_product <- function(price, finalPrice){
  cat("Product price:",price,"\nPromotional price:",finalPrice,"\n")
}
print_product(productPrice, finalPrice)
