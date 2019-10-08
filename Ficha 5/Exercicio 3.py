def soma_quad(quant):
    quadrado = 0
    soma = 0
    for i in range(1, quant + 1):
        quadrado = i * i
        soma = soma + quadrado
    return soma

numero = int (input( "Introduza um numero-> " ) )
print soma_quad(numero)
