lst = [2, 4, 3, 2, 2, 2, 3]

def remove_repetidos(list1):
    for i in range(len(list1)-1,0,-1):
        if list1[i] in list1 [0:i]:
            list1.remove(list1[i])
    return list1
    
    
print "Lista original-> ", lst
print "Lista sem repetidos-> ",remove_repetidos(lst)