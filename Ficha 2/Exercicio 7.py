preco = int (input ( "Introduza o preço do produto-> " ))
quantidade= int (input ( "Introduza a quantidade que quer levar-> " ))

desconto= 0
total = 0

total = preco * quantidade

if quantidade > 500:
    desconto = total * 0.05
    print "O valor do desconto é: ", desconto
    compra = total - desconto
    print "Sendo assim o valor da compra é : ", compra
    
    
elif quantidade > 1000:
    desconto = total * 0.08
    print "O valor do desconto é: ", desconto
    compra = total - desconto
    print "Sendo assim o valor da compra é : ", compra
    
else:
    print "Não ha desconto!"