numero = (1,2,3,4,5)

def qual_menor(t,num):
    quantos = 0
    for i in range (len(t)-1):
        if t[i] < num:
            quantos = quantos + 1
    return quantos

saber = int (input("Qual o numero que quer saber-> "))
print qual_menor(numero,saber), "Numeros são menores que ", saber 