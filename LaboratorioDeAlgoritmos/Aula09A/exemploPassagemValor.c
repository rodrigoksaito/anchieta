#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int valor1, valor2;
    valor1 = 10;
    valor2 = 20;
    
    printf("\nEndereco do valor1 (em main): %d", &valor1);
    printf("\nEndereco do valor2 (em main): %d", &valor2);
	
	passagemValores(valor1, valor2);
}

void passagemValores(int parametro1, int parametro2)
{
	printf("\nValor do parametro1 (em passagemValores): %d", parametro1);
	printf("\nValor do parametro2 (em passagemValores): %d", parametro2);
	
	printf("\nEndereco do parametro1 (em passagemValores): %d", &parametro1);
	printf("\nEndereco do parametro2 (em passagemValores): %d", &parametro2);
}




