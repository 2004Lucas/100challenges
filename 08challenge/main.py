distance = float(input("Enter a distance in meters: "))

km = distance / 1000
dam = distance / 10
hm = distance / 100
dm = distance * 10
cm = distance * 100
mm = distance * 1000

print("The distance of {:.1f}m corresponds to:".format(distance))
print("{:.5f}Km".format(km))
print("{:.4f}Dam".format(dam))
print("{:.4f}Hm".format(hm))
print("{:.1f}Dm".format(dm))
print("{:.0f}Cm".format(cm))
print("{:.0f}Mm".format(mm))
