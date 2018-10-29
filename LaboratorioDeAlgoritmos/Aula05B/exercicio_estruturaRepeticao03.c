#include <stdio.h> 
#include <stdlib.h>

int  main  (int  arg,  char	args[])
{
	//declaracao   de   variáveis 
	int  i,   qtde;

	printf("\nDigite  a  quantidade  de  vezes  que   o  loop  deve  executar:  "); 
	scanf("%d",&qtde);

	i  =  1;
	
	do
	{
		printf("\nTeste  de  laco:  %d",  i); 
		i++;
	}  while  (i  <=  qtde);

	printf("\nSaiu  do  Laco  "); 
	system("PAUSE  >>  NULL");
	return   0;
}


