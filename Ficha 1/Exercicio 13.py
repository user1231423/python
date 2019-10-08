numero = int(input("Introduza um inteiro--> "))

invertido = 0

while numero > 0:
    invertido = invertido * 10 + numero % 10
    numero = numero / 10
    
print invertido