#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(void)
{
	int matriz[4][3];
	
	matriz[0][0] = 0;
	matriz[0][1] = 1;
	matriz[0][2] = 2;
	
	matriz[1][0] = 3;
	matriz[1][1] = 4;
	matriz[1][2] = 5;
	
	matriz[2][0] = 6;
	matriz[2][1] = 7;
	matriz[2][2] = 8;
	
	matriz[3][0] = 9;
	matriz[3][1] = 10;
	matriz[3][2] = 11;

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





