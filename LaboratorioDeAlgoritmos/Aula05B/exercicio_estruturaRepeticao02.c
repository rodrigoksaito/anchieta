#include <stdio.h> 
#include <stdlib.h>

int  main  (int  arg,  char	args[])
{
	//declaracao   de   variáveis int  numero;
	int  numero;
	do
	{
		printf("\nDigite   um  numero  inteiro  de  0  a  10:  ");
		fflush(stdin);
		scanf("%d",  &numero);
	}  while  ((numero  <  0)   ||  (numero  >=  11));

	printf("\nSaiu  do  Laco  "); 
	system("PAUSE  >>  NULL");
	
	return   0;
}



