#include <stdio.h>
#include <stdlib.h>

int  main  (int  arg,  char	args[])
{
	//declaracao   de   variáveis 
	int  i,   qtde;
	float  media,   nota,  ac_notas;

	printf("\nDigite  a  quantidade  medias   a  serem  calculadas:   "); 
	scanf("%d",  &qtde);

	i  =  1;
	ac_notas  =  0;

	while  (i  <=  qtde)
	{
		printf("Digite  nota  %d:",  i); fflush(stdin);
		scanf("%f",  &nota); ac_notas  =   ac_notas  +  nota; i++;
	}
	media  =  ac_notas  /  qtde;

	printf("\nQuantidade  de  notas  digitadas:  %d",  qtde); 
	printf("\nNotas   Acumuladas:   %.2f",  ac_notas); 
	printf("\nMedia   das  notas  :   %.2f",  media);

	system("PAUSE  >>  NULL");

return   0;
}


