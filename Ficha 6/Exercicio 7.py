lst = ['a', 2, 'b', 'a']
search = 'a'

def posicoes_lista(list1,procurar):
    encontrado = []
    for i in range(len(list1)):
        if list1[i] == procurar:
            encontrado.append(i)
    return encontrado
    
print "numero encontrado nas seguintes posições-> ",posicoes_lista(lst,search)
