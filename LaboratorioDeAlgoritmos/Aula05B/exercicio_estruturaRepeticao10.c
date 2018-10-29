/* Exemplo  menu */
#include <stdio.h> 
#include <stdlib.h>
int main (int arg, char	args[])
{
	int opcao; //declaracao de variáveis 
	for (;;)   //laco   infinito
	{
		system("CLS");  //Limpa a tela 
		printf("MENU PRINCIPAL\n"); 
		printf("\n[1] - Soma");
		printf("\n[2] - Subtracao"); 
		printf("\n[3] - Multiplicacao"); 
		printf("\n[4] - Divisao");
		printf("\n[5] - Sair"); 
		printf("\n\n"); 
		printf("Escolha opcao: "); 
		fflush(stdin); 
		scanf("%d",&opcao);

		switch (opcao)
		{
			case 1:  printf("\nSera feito a soma de 2 numeros "); 
					 break;
			case 2:  printf("\nSerá feito a subtracao de 2 numeros"); 
					 break;
			case 3:  printf("\nSerá feito a multiplicacao de 2 numeros"); 
					 break;
			case 4:  printf("\nCodigo nao implementado"); 
					 sleep(1); break;
			case 5:  printf("\nSaida do sistema!"); 
					 sleep(1);
					 return 0; break;
			default: printf("Opcao  invalida!\n"); 
			   	     sleep(2); break;
		} //fim do switch
	}  //fim do Laco infinito return 0;
}


