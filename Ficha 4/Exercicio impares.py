filtra_impares = ((2, 5 ,6 , 7, 9, 1, 8, 8))

def filtrar (t):
    impares=()
    for i in (t):
        if i % 2 <> 0:
            impares = impares + (i, )
    return impares
        
print filtrar(filtra_impares)
