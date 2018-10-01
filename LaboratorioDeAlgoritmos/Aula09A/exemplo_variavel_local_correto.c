#include <stdio.h>
#include <stdlib.h>

//prototipos das funcoes
void somaValores(int pValor1, int pValor2);

void main(int argc, char *argv[])
{
	//variaveis locais
	int valor1, valor2;

    valor1 = 10; valor2 = 20;
   
    printf("\nValor em main de valor1: %d", valor1);
    printf("\nValor em main de valor2: %d", valor2);
	
	somaValores(valor1, valor2);
}

void somaValores(int pValor1, int pValor2)
{
	//variavel local, somente enxergado por somaValores
	int resultado;
	resultado = pValor1 + pValor2;
	printf("\n\nResultado da soma em somaValores: %d", resultado);
}

