lst1 = [ 2, 3, 5, 9, 12, 33, 34, 45 ]
lst2 = [ 3 ]

def remove (lista1,lista2):
    multi = lista2[0]
    limp = []
    for i in range (len(lista1)-1):
        num=lista1[i]%multi
        if num > 0:
            limp.append(lista1[i])
    return limp

print "Lista-> ", lst1 + lst2
print "Multiplos removidos-> ", remove(lst1,lst2)
    
    
    
