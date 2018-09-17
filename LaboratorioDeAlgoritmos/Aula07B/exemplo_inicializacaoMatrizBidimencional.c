#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINHAS 10
#define COLUNAS 2

void main(void)
{
	int i, j;
	int sqrt[LINHAS][COLUNAS] = {
		1, 1,
		2, 4,
		3, 9,
		4, 16,
		5, 25,
		6, 36,
		7, 49,
		8, 64,
		9, 81,
		10, 100	
	};
	
	for (i=0; i< LINHAS; i++)
	{
		for (j=0; j< COLUNAS; j++)
		{
			printf("%d = valor de na posicao de sqrt[%d][%d]\n", sqrt[i][j], i, j);
		}
	}
}





