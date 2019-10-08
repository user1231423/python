numeros = (1, 2, 2, 3, 3, 4, 4)


def juntos(t):
    estao = 0
    for i in range (len(t)-1):
        if t[i] == t[i+1]:
            estao = estao + 1
    return estao

print "Existem ", juntos(numeros), "numeros iguais juntos!"