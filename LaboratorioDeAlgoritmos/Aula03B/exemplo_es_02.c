/*Escreva um programa em C que calcule sua média semestral. */

#include <stdio.h>

int main()
{
	float np1, np2;
	float trab;
	float ms;

	printf("Calculo da media semestral. ");
	printf("\n\n");

	printf("Informe a primeira nota do professor: ");
	scanf("%f", &np1);

	printf("Informe a segunda nota do professor: ");
	scanf("%f", &np2);

	printf("Informe a nota do trabalho: ");
	scanf("%f", &trab);

	ms = (np1 * 4 + trab * 2 + np2 * 4) / 10;

	printf("Media semestral: %2.2f", ms);
	printf("\n\n");

	system("PAUSE");
	return 0;
}
