def existe_algarismo(num,existe):
    i = 0
    while num > 0:
        digito = num % 10
        num = num // 10
        if digito == existe:
            i = 1
            
    if i == 1:
        print "O número existe!"
    else:
        print "O número não existe!"
    
    
numero=int(input("Introduza um número-> "))
verificar=int(input("Introduza um número para verificar se existe-> "))

existe_algarismo(numero,verificar)