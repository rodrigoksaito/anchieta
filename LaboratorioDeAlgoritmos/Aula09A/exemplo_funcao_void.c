#include <stdio.h>
#include <stdlib.h>

void pegarEimprimirValor1(void);
void pegarEimprimirValor2(void);

void main(int argc, char *argv[])
{
	pegarEimprimirValor1();
	pegarEimprimirValor2();
}

void pegarEimprimirValor1(void)
{
	int valor1;
	printf("\nDigite o valor 1: ");
	scanf("%d", &valor1);
	printf("\nO valor1 digitado foi: %d", valor1);
}

void pegarEimprimirValor2(void)
{
	int valor2;
	printf("\nDigite o valor 2: ");
	scanf("%d", &valor2);
	printf("\nO valor2 digitado foi: %d", valor2);
}
