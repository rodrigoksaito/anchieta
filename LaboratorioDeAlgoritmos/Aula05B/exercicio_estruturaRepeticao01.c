#include <stdio.h> 
#include <stdlib.h>

int  main  (int  arg,  char	args[])
{
	//declaracao   de   variáveis char  sexo;
	char  sexo;
	
	do
	{
		printf("\nDigite   [M]asculino  ou  [F]eminino:  "); 
		fflush(stdin);
		scanf("%c",  &sexo);
	}  while  ((sexo  !=  'M')  &&  (sexo  !=  'F'));

	printf("\nSaiu  do  Laco  "); 
	
	system("PAUSE  >>  NULL");
	return   0;
}


