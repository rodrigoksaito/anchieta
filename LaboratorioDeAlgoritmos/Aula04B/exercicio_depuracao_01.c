/*
  Exemplo de programa para depuracao 
  Faça um programa que leia 2 numeros reais (float) e forneça a 
  média aritmetica;
*/

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args[])
{
    //declaracao de variáveis
    float nota1, nota2, media;
    
    printf("\nDigita nota 1: ");
    scanf("%f", &nota1);
   
    printf("\nDigita nota 2: ");
    scanf("%f", &nota2);
    
    media = nota1 + nota2 / 2;
    
    printf("\nA media aritmetica e: %.2f", &media);
    
    system("PAUSE >> NULL");
    
    return 0;    
}

