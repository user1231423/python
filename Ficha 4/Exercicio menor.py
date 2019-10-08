numero = (2,3,5,6,7,8)

n_saber = 4

def qual_menor(t,num):
    quantos = 0
    for i in range (len(t)):
        if t[i] < num:
            quantos = quantos + 1
    return quantos

print qual_menor(numero,n_saber), "Numeros são menores que ", n_saber