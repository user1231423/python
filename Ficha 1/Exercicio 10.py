ano = input("Escreva um ano --> ")
if ano % 4 == 0:
    if ano % 400 == 0 and ano % 100 == 0:
        print ("O ano ", ano ," e bisexto")
    elif ano % 100!=0:
        print ("O ano ", ano ," e bisexto")
    else:
        print("O ano ", ano ," nao e bisexto")
else:
    print("O ano", ano ," nao e bisexto")