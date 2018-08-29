/*Exemplo de código de entrada e saída 01 */

#include <stdio.h>   

int main()
{
	int ano_atual;
	int ano_nasc;
	int idade;

	printf("Programa que calcula a idade de uma pessoa.");
	printf("\n\n");

	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);

	printf("Informe o ano de nascimento: ");
	scanf("%d", &ano_nasc);

	idade = ano_atual - ano_nasc;

	printf("Voce tem %d anos.", idade);
	printf("\n\n");

	getch();
	return 0;
}

