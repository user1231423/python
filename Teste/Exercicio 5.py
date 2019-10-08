dicionario = {
    0 : 2,
    1 : 5,
    2 : 3
}

def soma_quadrados_valores(dic):
    soma = 0
    for i in range(len(dic)):
        quadrado = dic[i] * dic[i]
        soma = soma + quadrado
    print "Soma dos quadrados-> ", soma
    
soma_quadrados_valores(dicionario)