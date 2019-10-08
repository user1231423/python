t1 = (2,34,200,210)
t2 = (3,4,5,7)

def ordenar(t1,t2):
    i=0
    j=0
    res=()
    while i<len (t1) and j < len (t2):
        if t1[i] < t2[j]:
            res = res + (t1[i], )
            i = i + 1
        else:
            res = res + (t2[j], )
            j = j +1
    res = res + t1[i:] + t2[j:]
    return res


def facil(t1,t2):
    juntar = t1 + t2
    tuplo = tuple(sorted(juntar))
    return tuplo