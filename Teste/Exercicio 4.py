lst = [1,2,3]

def soma_quadrados_for(lista):
    soma = 0
    for i in range(len(lista)):
        quadrado = lista[i]*lista[i]
        soma = soma + quadrado
    print "Soma dos quadrados", soma
    
soma_quadrados_for(lst)

def soma_quadrados_while(lista):
    cont = 0
    soma = 0
    while cont != len(lista):
        quadrado = lista[cont] * lista[cont]
        soma = soma + quadrado
        cont = cont + 1
    print "Soma dos quadrados", soma
    
soma_quadrados_while(lst)