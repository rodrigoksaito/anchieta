#include <stdio.h>
#include <stdlib.h>

int calcularCubo(int pValor);

void main(int argc, char *argv[])
{
	int valor, valorCubo;
	printf("Digite um valor para calcular: ");
	scanf("%d", &valor);
	
	valorCubo = calcularCubo(valor);
	printf("O valor do cubo e: %d", valorCubo);
}

int calcularCubo(int pValor)
{
	int resultado;
	resultado = pValor * pValor * pValor;
	return resultado;
}

