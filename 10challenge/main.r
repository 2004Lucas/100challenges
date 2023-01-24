width <- as.numeric(readline("Enter the width of the wall: "))
height <- as.numeric(readline("Enter the height of the wall: "))

area <- width * height
paint_needed <- area / 2

cat("The area to be painted is: ", area, " square meters\n")
cat("The amount of paint needed is: ", paint_needed, " liters\n")
