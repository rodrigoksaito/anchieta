#include <stdio.h> 
#include <stdlib.h>

int main (int arg, char	args[])
{
	//declaracao   de   vari�veis 
	int  i;
	float salario;

	for (i=0; i<10; i++)
	{
		printf("\nDigite salario do funcionario %d: ", i+1); 
		scanf("%f", &salario);
	}

	system("PAUSE >> NULL");

	return 0;
}


