#include <stdio.h>
#include <stdlib.h>

//prototipos das funcoes
void somaValores();

//variaveis globais
int valor1, valor2;

void main(int argc, char *argv[])
{
    valor1 = 10; valor2 = 20;
   
    printf("\nValor em main de valor1: %d", valor1);
    printf("\nValor em main de valor2: %d", valor2);
	
	somaValores(); //chamada da funcao somaValores
}

void somaValores()
{
	//variavel local, somente enxergado por somaValores
	int resultado;
	resultado = valor1 + valor2;
	printf("\n\nResultado da soma em somaValores: %d", resultado);
}



