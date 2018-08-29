/*
  Exemplo de programa para depuracao 
  Faça um programa que leia um caractere e caso seja diferente de m ou f, 
  mostre uma mensagem caso o seja válido ou nao
*/

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args[])
{
    //declaracao de variáveis
    char sexo;
    
    printf("Digite f ou m: ");
    scanf("%c",&sexo);
    
    if ((sexo == 'f') && (sexo =='m'))
       printf("Sexo valido!");
    else
       printf("Sexo invalido!");
        
    system("PAUSE >> NULL");
    
    return 0;    
}

