pi = 3.14

def area_circulo (raio):
    area = pi * (raio * raio)
    return area

raio = float( input ( "Qual o raio do circulo-> " ) )

print "A area é: ", area_circulo(raio)