import random

container = ['A',2,3,4,5,6,7,8,9,10,'J','Q','K']

baralho = {
    0:{
        0:
        (
            container
        ),
        1:
        (
            container
        ),
        2:
        ( 
            container
        ),
        3:
        (
            container
        )
    }
}

def mostrar_baralho(b):
    lista = []
    for i in b:
        lista.append(b[0])
    return lista

print mostrar_baralho(baralho)

def baralhar_cartas(dicionario,cartas):
    devolver=dicionario
    cont = 0
    while cont <= 4:
        devolver[0] [cont] = random.sample(cartas,len(cartas))
        cont = cont + 1
    return devolver
        
print baralhar_cartas(baralho,container)

