pi = 3.14

def area_circulo (raio):
    area = pi * (raio * raio)
    return area

def area_coroa(x1,x2):
    if x1>x2:
        raise ValueError
    else:
        ext = area_circulo(x1)
        interior= area_circulo(x2)
        area_coroa= ext - interior
        return area_coroa
    
areaext=float(input( "Insira o raio Exterior-> " ))
areaint=float(input( "Insira o raio Interior-> " ))

print "Area da coroa: ", area_coroa(areaext,areaint)
