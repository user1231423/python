filtra_pares = ((2, 5 ,6 , 7, 9, 1, 8, 8))

def filtrar (t):
    pares=()
    for i in (t):
        if i % 2 == 0:
            pares = pares + (i, )
    return pares
        
print filtrar(filtra_pares)
    