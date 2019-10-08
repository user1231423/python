#Variaveis globais
gasolina = 1.60 #Gasolina a 1.60
diesel = 1.43 #Gasolina a 1.43
distancia = 2000 #Dist�ncia de 2000 km

carros = {
    0:{ #Carro 1
        'Marca': [ #Marca
            'Ford'
        ],
        'Modelo': [
            'Fiesta'
        ],
        'Consumos': [ #Consumos
            17 #Faz 17 km com 1 litro de combustivel
        ],
        'Preco': [ #Preco
            50000
        ],
        'Combustivel':[
            2
        ]
    },
    1: { #Carro 2
        'Marca': [ #Marca
            'BMW'
        ],
        'Modelo':[
            '320d'
        ],
        'Consumos': [ #Consumos
            16.2 #Faz 16.2 km com 1 litro de combustivel
        ],
        'Preco': [ #Preco
            90000
        ],
        'Combustivel':[
            1
        ]
    }
}

def consumo(dic):
    for i in range(len(dic)):
        litro = dic[i] ['Consumos'] [0] #Obter o consumo do carro a cada 1km
        tipo_combustivel = dic[i] ['Combustivel'] #Obter o tipo de combustivel do carro
        consumo = distancia / litro #Saber consumo do carro aos 2000km
        if tipo_combustivel == 1:
            custo = diesel * consumo #Se o tipo for 1 quer dizer que � diesel
        else:
            custo = gasolina * consumo #Se nao for diesel � gasolina
        print (dic[i] ['Marca'] [0], dic[i] ['Modelo'] [0], "Consome: \n >",round(consumo) , "L a cada", distancia, "Km")
        print ("Custo do combustivel-> ", round(custo), "� \n")

#Verificar quantos iguais existem
def consumos_iguais(dic,mais_eco):    
    guardar = []
    for i in range(len(dic)):
        votos = dic[i] ['Consumos'] [0]
        if votos == mais_eco:
            guardar.append(i)
    return guardar 

def qual_mais_economico (dic):   
    eco = dic [0] ['Consumos'] [0] #Definir o primeiro carro de todos como o mais economico para poder comparar com os outros
    for i in range(len(dic)):
        num = dic [i] ['Consumos'] [0] #num � igual ao consumo do carro na qual o contador se encontra no momento
        if num > eco: #Se o numero obtino for maior que o mais economico quer dizer que o numero � o mais economico pois faz mais km com 1 litro de combustivel
            eco = num #Ent�o o economico fica com o valor de num
            marca = dic[i] ['Marca'] [0] #Obtemos a marca e o modelo do carro que � o mais economico
            modelo = dic[i] ['Modelo'] [0]
            mostrar = i
        else: #Caso contrario atribuimos a marca e o modelo ao primeiro carro
            marca = dic[0] ['Marca'] [0]
            modelo = dic[0] ['Modelo'] [0]
            mostrar = i
    economico = dic[mostrar] ['Consumos'] [0]
    iguais = consumos_iguais(dic,economico)
    if len(iguais) > 1: #Se for maior que 1 quer dizer que existe mais que um carro com os mesmos consumos
        print ("Existem", len(iguais), "carros igualmente economicos: \n")
        for x in range(len(iguais)):
            marca = dic[iguais[x]] ['Marca'] [0]
            modelo = dic[iguais[x]] ['Modelo']  [0]            
            print "->", marca, modelo , "\n"
    else:
        print ("O Carro mais economico:  ")
        print ("-> ", marca, modelo , "\n")

qual_mais_economico(carros)
print ("Consumos de todos os carros: \n")
consumo(carros)