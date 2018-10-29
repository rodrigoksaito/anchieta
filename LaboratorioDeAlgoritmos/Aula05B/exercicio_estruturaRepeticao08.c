#include <stdio.h> 
#include <stdlib.h>

int main (int arg, char	args[])
{
	//declaracao de variáveis 
	int i;
	float salario;

	for (i=0; i<10; i++)
	{
		printf("\nDigite salario do funcionario %d: ", i+1); 
		scanf("%f", &salario);
		if (i == 3)
		{
			printf("Saiu do laco antes de completar 9"); 
			break;
		}
	}

	system("PAUSE >> NULL");

	return 0;
}


