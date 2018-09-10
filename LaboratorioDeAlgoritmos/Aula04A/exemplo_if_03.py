import os

def main():
    print("Opcoes de Operacoes\n")
    print("1 - Soma")
    print("2 - Subtracao")
    print("3 - Multiplicacao")
    print("4 - Divisão")
    
    opcao = int(input("Escolha uma opcao: "))

    valor1 = int(input("Digite valor1: "))

    valor2 = int(input("Digite valor2: "))

    if opcao == 1:
        resultado = valor1 + valor2
        print("O resultado da soma é: %5.2f" %(resultado))
    elif opcao == 2:
        resultado = valor1 - valor2
        print("O resultado da subtracao é: %5.2f" %(resultado))
    elif opcao == 3:
        resultado = valor1 * valor2
        print("O resultado da multiplicacao é: %5.2f" %(resultado))
    elif opcao == 4:
        resultado = valor1 / valor2
        print("O resultado da divisão é: %5.2f" %(resultado))
    else:
        print("Não escolheu nenhuma das opções")

        
if __name__ == '__main__':
    main()


