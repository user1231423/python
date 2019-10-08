lst = ['a',[ 'b', 'c' ], 5]

def duplica(lista):
    duplicada = []
    for x in range (len(lista)):
        duplicado = lista[x]
        duplicada.extend([duplicado,duplicado])
    return duplicada


print "Original-> ", lst
print "Elementos Duplicados-> ",duplica(lst)
    