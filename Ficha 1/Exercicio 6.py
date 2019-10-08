int_segundos = input("Escreva o número de segundos -->")
segundos = int(int_segundos)

horas = segundos / 3600 #total de seugndos a dividir por 3600 pois uma hora sao 3600 segundos
print(horas)
#1 dia são 86 400 segundos 
dias = segundos / 86400

print(dias)

seg = segundos % 3600 # para saber os segundos restantes divido o total de segunods por 3600 que é a quantidade de segunodos de 1 minuto

print(seg)

minutos = seg // 60 # para saber os minutos divido os segundos restantes por 60 que é quandos minutos são uma hora
print(minutos)


#Pedir a professora para explicar
seg_restantes = seg % 60
print(seg_restantes)

if (horas >= 24):
    dias = int(horas / 24)
    print(dias)
    horas = int(horas % 24)
    print(horas)
    

print ("Dias: ", dias , "Horas: ", horas , "Minutos: ", minutos ,"Segundos: ", seg_restantes) 