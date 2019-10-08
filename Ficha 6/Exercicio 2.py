lista1= [ 100, 90 , 80 ]
lista2= [ 12, 11, 10, 9 ]

def junta (list1,list2):
    for i in range(len(list1)-1, 0 , -1):
        for x in range(i):
            if list1[x] > list1[x+1]:
                maior = list1[x]
                list1[x] = list1[x+1]
                list1[x+1] = maior
             
    for i in range(len(list2)-1, 0 , -1):
        for x in range(i):
            if list2[x] > list2[x+1]:
                maior = list2[x]
                list2[x] = list2[x+1]
                list2[x+1] = maior
                
    ordenadas= list1+list2
    
    for i in range(len(ordenadas)-1, 0 , -1):
        for x in range(i):
            if ordenadas[x] > ordenadas[x+1]:
                maior = ordenadas[x]
                ordenadas[x] = ordenadas[x+1]
                ordenadas[x+1] = maior
            
    return ordenadas
     
print "Lista 1-> ", lista1
print "Lista 2-> ", lista2

print "Listas ordenadas-> ",junta(lista1,lista2)
    

