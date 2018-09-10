'''
Faça um contador dos numeros infinitamente

Evite utilizar loops infinitos sempre que possível!
'''

def main():
    contador = 0
    while True:
        contador = contador + 1
        print("Resultado da soma: %d" % (contador))

        if (contador == 5000):
            break
        
    print("%d é o resultado do contador" % (contador))
        
if __name__ == '__main__':
    main()


