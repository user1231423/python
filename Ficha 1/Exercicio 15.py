num = input("Introduza um numero--> ")

i=0

while num > 0:
    digito = num % 100
    num = num // 10
    if digito == 0:
        i=i+1

print "O numero tem zeros ", i , " seguidos"