def criar_pilha():
    return []

def inserir_elemento(pilha,elemento):
    return pilha.append(elemento)

def top_pilha(pilha):
    if len (pilha) == 0:
        raise ValueError('Topo: a pilha não tem elementos')
    else:
        print pilha.pop(-1) 

def imprime_pilha_ao_contrario(pilha):
    string = "";
    if len (pilha) == 0:
        raise ValueError('Topo: a pilha não tem elementos')
    else:
        for i in range(len(pilha)-1,-1,-1):
            letter = pilha[i]
            string = string + letter   
        print string
        # letter = pilha[::-1] ao contrario
    
def pedir_palavra():
    palavra = "portugal"
    return palavra

    
def inverter_palavra(palavra):
    palavra = pedir_palavra()
    pilha = criar_pilha()
    for i in range(len(palavra)):
        inserir_elemento(pilha,palavra[i])
    imprime_pilha_ao_contrario(pilha)

x = pedir_palavra()
inverter_palavra(x)