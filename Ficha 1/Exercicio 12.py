numero = int(input("Introduza um numero inteiro --> "))
res= 0
pos= 1

while numero !=0:
    digito = numero % 10
    numero = numero // 10
    if digito % 3 == 1:
        res = res + pos * digito
        pos = pos * 10
        
print "resultado : ", res