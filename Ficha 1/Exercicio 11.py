hora = int(input("Qual o valor de uma hora de trabalho --> "))
tempo = int(input("Qual o numero de horas trabalhadas --> "))

if tempo <= 40:
    salario = hora * tempo
    print "O Salario do trabalhador e ", salario
    
elif tempo > 40:
    tempo_extra = tempo - 40
    hora_extra = hora * 2
    extra = tempo_extra * hora
    salario = (hora * tempo) + extra
    print "O salario do trabalhador e ", salario