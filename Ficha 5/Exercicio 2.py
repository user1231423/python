def divisores(numero):
	ndivs = 0
	for cont in range(1 , numero + 1):
		print cont
		resto = numero % cont
		if resto == 0:
			ndivs = ndivs + 1
	return ndivs


num = int (input ( "Introduza um Numero-> " ) )

print divisores(num)

