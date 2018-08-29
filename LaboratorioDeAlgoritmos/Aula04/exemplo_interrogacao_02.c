/* Exemplo 2 de utilizacao do operador ? */

#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args )
{
    //declaracao de variaveis
    int numero;
    int resto;
          
    //entrada
    printf("Digite um numer inteiro entre 0 e 10: ");
    fflush(stdin);
    scanf("%d", &numero);
    
    resto = numero % 2;
    
    resto == 0 ? 
      printf("\n%d é um numero par", numero) : 
      printf("\n%d é um numero impar", numero);
    
    system("PAUSE >> null");
                
    return 0;    
}

