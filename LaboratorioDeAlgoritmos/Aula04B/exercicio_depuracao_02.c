/*
  Exemplo de programa para depuracao 
  Faça um programa que leia a nota de 1 aluno e caso, imprimir 
  reprovado caso seja menor a 5, e imprimir aprovado, caso seja
  maior que 5. e imprima também: "Vá para a proxima fase!"
*/

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args[])
{
    //declaracao de variáveis
    float media;
    
    printf("\nDigite media: ");
    scanf("%f", &media);
   
    if (media < 5)
      printf("\nReprovado");
    else
      printf("\nAprovado");
      printf("\nVa para a proxima fase!");
        
    system("PAUSE >> NULL");
    
    return 0;    
}

