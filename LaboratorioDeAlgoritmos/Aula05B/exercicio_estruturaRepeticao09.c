#include <stdio.h> 
#include <stdlib.h>

int main (int arg, char	args[])
{
	//declaracao   de   variáveis 
	int i;
	float salario;

	for  (i=0;  i<10;   i++)
	{
		printf("\nValor de i e:%d na linha:%d: ", i, i+1);

		if (i == 5) 
			continue;
		printf("\nQuando i for = a 5, esta linha nao sera executada!");
	}

	system("PAUSE >> NULL");

	return 0;
}


