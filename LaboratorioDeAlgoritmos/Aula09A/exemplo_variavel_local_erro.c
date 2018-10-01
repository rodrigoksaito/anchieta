#include <stdio.h>
#include <stdlib.h>

//prototipos das funcoes
void somaValores();

void main(int argc, char *argv[])
{
	//variaveis locais
	int valor1, valor2;

    valor1 = 10; valor2 = 20;
   
    printf("\nValor em main de valor1: %d", valor1);
    printf("\nValor em main de valor2: %d", valor2);
	
	somaValores();
}

void somaValores()
{
	//variavel local, somente enxergado por somaValores
	int resultado;
	resultado = valor1 + valor2;
	printf("\n\nResultado da soma em somaValores: %d", resultado);
}

