def main():
    print("Programa que calcula a idade de uma pessoa\n\n")

    ano_atual = int(input("Informa o ano atual: "))

    ano_nasc = int(input("Informa o ano de nascimento: "))

    idade = ano_atual - ano_nasc

    if idade == 1:
        print("Voce tem %d ano de vida." % (idade))
    else:
        print("Voce tem %d anos de vida." % (idade))


if __name__ == '__main__':
    main()
