print ("Calcular a velocidade média!")
km= input ( "Introduza a distânca percorrida-->" )
time= input ("Tempo na qual foi percorrida tal distância--> ")
float_time= float(time) # Tornar a variavel time num float
time_h= float_time/60 # Passar a variavel time de minutos para horas
vm= km/time_h # Calcular a velocidade media em km/h
print ("A velocidade média em Km/h: ", vm)
km_to_m= km*1000 #Transformar km em m
time_s= time_h*60 #Trasnformar horas em segundos
vm= km_to_m/time_s #Calcular m/s pois o tempo encontra-se agora em segundos e a distãncia e m
print ("A velocidade média em m/s: ", round (vm))
