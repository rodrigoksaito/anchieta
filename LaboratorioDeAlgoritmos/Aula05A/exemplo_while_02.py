'''
Faça a soma acumulada somente dos numeros pares de 0 a 1000
'''

def main():

    contador = 0
    soma = 0
    while contador <= 1000:
        soma = soma + contador
        contador = contador + 2

    print("%d é a soma somente dos números pares" % (soma))
        
if __name__ == '__main__':
    main()


