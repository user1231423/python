from math import sqrt

c1 = input("Cateto 1 --> ")
c2 = input("Cateto 2 --> ")

cateto1 = c1 ^ 2
cateto2 = c2 ^ 2

hip = cateto1 + cateto2

hipotenusa = sqrt(hip)

print "A hipotenusa é ", round(hipotenusa)