valor= 0
soma= 0
cont = 0

while valor < 100:
    valor = int (input ( "Intruduza um numero inferior a 100-> " ))
    soma = soma + valor
    cont = cont +1
    if soma == 500 or soma > 500:
        print "A soma é : ", soma
        media = soma / cont
        print "A média dos valores é : ", media
        break
else:
    print "Numero inválido"