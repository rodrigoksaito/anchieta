def somainteiros(* inteiros):
    for valor in inteiros:
        print(f'{valor} ', end='')
    print('')

def containteiros (* inteiros):
    tamanho = len(inteiros)
    print(f'A quantidade de inteiros recebidos sao {tamanho}')

    
#chamada das funcoes
somainteiros(5, 4)
somainteiros(6, 2, 2)
somainteiros(5, 3, 2, 1)

containteiros(3, 1)
containteiros(3, 1, 5, 6, 8, 4)

#passando uma lista como parametro

def dobraLista(lista):
    posicao = 0
    while posicao < len(lista):
        lista[posicao] *= 2
        posicao += 1


listaValores = [1, 2, 3, 4, 5, 6]
dobraLista(listaValores)
print('Valores da lista dobrada: ',listaValores)



