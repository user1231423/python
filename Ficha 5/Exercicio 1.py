def triangular(numero):
	soma = 0
	for cont in range(1 , numero):
		soma = soma + cont
		if soma == numero:
			return True
	return False


num = int (input ( "Introduza um Numero-> " ) )

print triangular(num)

