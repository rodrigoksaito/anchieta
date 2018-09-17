#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINHAS 4
#define COLUNAS 3

void main(void)
{
	int matriz[LINHAS][COLUNAS];
	int i, j, contador = 0;
	
	for (i=0; i<=3; i++)
	{
		for (j=0; j<=2; j++)
		{
			matriz[i][j] = contador;		
			contador++;
		}
	}

	for (i=0; i<=3; i++)
	{
		for (j=0; j<=2; j++)
		{
			printf("%d = valor da matriz[%d][%d]\n", matriz[i][j], i, j);
		}
	}
}





