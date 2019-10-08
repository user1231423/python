tuplo = (('a',8),('b',9),('a',3))

def agrupar(t):
        devolver = {}
        for i in t:
                if i[0] not in devolver:
                        devolver[i[0]] = [i[1]]
                else:
                        devolver[i[0]] = devolver[i[0]] + [i[1]]
        return devolver

print agrupar(tuplo)