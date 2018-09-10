def main():
    numero_vezes = int(input("Digite o numero de vezes a ser executado: "))

    contador = 1
    while contador <= numero_vezes:
        print("Quantidade executada: %d" % (contador))
        contador = contador + 1

    print("%d vezes executadas com sucesso!" % (numero_vezes))
        
if __name__ == '__main__':
    main()


