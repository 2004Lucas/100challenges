distance <- as.numeric(readline("Enter a distance in meters: "))
km <- distance / 1000
dam <- distance / 10
hm <- distance / 100
dm <- distance * 10
cm <- distance * 100
mm <- distance * 1000
cat("The distance of ", distance, "m corresponds to:\n")
cat(km, "Km\n")
cat(dam, "Dam\n")
cat(hm, "Hm\n")
cat(dm, "Dm\n")
cat(cm, "Cm\n")
cat(mm, "Mm\n")
