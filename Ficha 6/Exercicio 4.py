def multiplos(num):
    maxi = 10
    cont = 0
    lista=[]
    
    while cont < maxi:
        cont=cont+1
        multiplo=num*cont
        lista.append(multiplo)
    
    return lista

numero=int(input("Insira um número-> "))

print "Multiplos de ",numero
print multiplos(numero)
