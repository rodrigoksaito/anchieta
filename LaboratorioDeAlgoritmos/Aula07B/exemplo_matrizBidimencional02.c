#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINHAS 4
#define COLUNAS 3

void main(void)
{
	int matriz[LINHAS][COLUNAS];
	int ilinha = 0; int icoluna = 0;
	
	matriz[0][0] = 0;
	icoluna++;
	matriz[ilinha][icoluna] = 1;
	icoluna++;
	matriz[ilinha][icoluna] = 2;
	
	ilinha = 1; icoluna = 0;
	matriz[ilinha][icoluna] = 3;
	icoluna++;
	matriz[ilinha][icoluna] = 4;
	icoluna++;
	matriz[ilinha][icoluna] = 5;
	
	ilinha = 2; icoluna = 0;
	matriz[ilinha][icoluna] = 6;
	icoluna++;
	matriz[ilinha][icoluna] = 7;
	icoluna++;
	matriz[ilinha][icoluna] = 8;
	
	ilinha = 3; icoluna = 0;
	matriz[ilinha][icoluna] = 9;
	icoluna++;
	matriz[ilinha][icoluna] = 10;
	icoluna++;
	matriz[ilinha][icoluna] = 11;

	printf("%d = valor da matriz[0][0]\n", matriz[0][0]);
	printf("%d = valor da matriz[0][1]\n", matriz[0][1]);
	printf("%d = valor da matriz[0][2]\n", matriz[0][2]);
	
	printf("%d = valor da matriz[1][0]\n", matriz[1][0]);
	printf("%d = valor da matriz[1][1]\n", matriz[1][1]);
	printf("%d = valor da matriz[1][2]\n", matriz[1][2]);

	printf("%d = valor da matriz[2][0]\n", matriz[2][0]);
	printf("%d = valor da matriz[2][1]\n", matriz[2][1]);
	printf("%d = valor da matriz[2][2]\n", matriz[2][2]);

	printf("%d = valor da matriz[3][0]\n", matriz[3][0]);
	printf("%d = valor da matriz[3][1]\n", matriz[3][1]);
	printf("%d = valor da matriz[3][2]\n", matriz[3][2]);
}





