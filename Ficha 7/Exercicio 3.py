def contar_palavras(string):
  string = string.split()
  dicionario = {}
  for i in string:
    dicionario[i] = i.count(i)
  print "Foram introduzidas", len(dicionario), "Palavras!"
  return dicionario

print contar_palavras("NAO GOSTO DE PORTUGUES")