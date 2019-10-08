lst = [1, 2, 3, 2, 4]

def substitui(lista,velho,novo):
    for i in range(len(lista)):
        if lista[i] == velho:
            lista[i] = novo
    return lista
    

print "Lista-> ", lst
old=input(("Valor velho-> "))
new=input(("Novo Valor-> "))
print "Lista atualizada-> ", substitui(lst,old,new)
