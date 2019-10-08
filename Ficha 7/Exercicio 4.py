bib=[
    {
        0:{
            'Autores':[
                'Não sei'
            ],
            'Titulo':[
                'Livro 1'
            ],
            'Editora':[
                'N'
            ],
            'Cidade':[
                'Funchal'
            ],
            'Paginas':[
                '244'
            ],
            'ISBN':[
                'NS'
            ],
            'ano':[
                1900
            ]
        },
        1:{
            'Autores':[
                'XX'
            ],
            'Titulo':[
                'Livro 2'
            ],
            'Editora':[
                'AA'
            ],
            'Cidade':[
                'Lisboa'
            ],
            'Paginas':[
                '2000'
            ],
            'ISBN':[
                'LL'
            ],
            'ano':[
                2001
            ]
        }
    }
]

def mais_antigo(lista):
    menor = lista [0] [0] ['ano']
    for i in range(len(lista[0])):
        num = lista [0] [i] ['ano']
        if num < menor:
            menor = num
            titulo = lista[0] [i] ['Titulo']
        else:
            menor = menor
            titulo = lista[0] [0] ['Titulo']
    return titulo


print "O livro mais antigo é o ", mais_antigo(bib)
        
    