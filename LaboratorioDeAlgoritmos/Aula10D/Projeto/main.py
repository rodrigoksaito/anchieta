import sys
sys.path.insert(0,'/lib')

import libmath


def main():
    print('Testando a funcao dobro')
    numero = eval(input('Digite um valor para saber o dobro: '))
    resultado = libmath.dobro(numero)
    print(f'O dobro de {numero} é {resultado}')
    


if __name__ == '__main__':
    main()

