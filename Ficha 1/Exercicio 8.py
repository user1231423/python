valor = input("introduza um valor entre 1 e 5: ")

if valor <= 1 or valor >=5:
    print ("numero não aceite, introduza novamente um numero")
    valor2= input("Valor-> ")
    print("O numero introduzido: ", valor2)
else:
    print(valor)