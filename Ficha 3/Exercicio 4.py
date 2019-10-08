numero=float(input("Introduza um numero-> "))

euros=int(numero)
cent=(numero-euros)*100 #obter um numero inteiro de cêntimos para usar no segundo for

for cont in (50,20,10,5,2,1):
        quantas = euros // cont
        euros = euros % cont
        if cont==2 or cont==1:
                print quantas,"Moedas de ",cont, "euros"
        else:
                print quantas,"Notas de ",cont, "euros"
            
for cont in (50,20,10,5,2,1):
        quantas = cent // cont
        cent = cent % cont 
        print quantas,"Moedas de ",cont,"cêntimos"
    