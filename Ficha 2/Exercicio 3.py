cont = 0
num = 0
maior = 0
while cont < 2:
    num = int(input( "Introduza um numero -> " ))
    if num > maior:
        maior = num
    cont = cont +1
    
print "O maior numero introduzido foi : ", maior