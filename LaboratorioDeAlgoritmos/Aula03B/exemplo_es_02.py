def main():
    print("Calculo da média semestral\n\n")

    np1 = int(input("Informe a primeira nota do professor: "))

    np2 = int(input("Informe a primeira nota do professor: "))

    trab = int(input("Informe a nota do trabalho: "))

    ms = (np1 * 4 + trab * 2 + np2 * 4) / 10

    print("Média semestral: %2.2f." % (ms))


if __name__ == '__main__':
    main()
