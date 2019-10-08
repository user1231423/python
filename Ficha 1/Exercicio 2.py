nota1 = float(input("Primeira nota do aluno --> "))
nota2 = float(input("Primeira nota do aluno --> "))

media = (nota1 + nota2) / 2

if media < 9.5: 
    print "Aluno reprovado"
    print "com media de ", media
elif media >= 9.5:
    print "Aluno aprovado"
    print "com media de ", media