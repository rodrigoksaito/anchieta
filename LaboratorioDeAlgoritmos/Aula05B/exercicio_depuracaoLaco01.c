/*
Faça um programa que leia 5 numeros inteiros de 0 a 100
e mostre qual o menor numero lido;
*/

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args[])
{
    //declaracao de variáveis
    int i, numero;
    int menor;
       
    i = 1;
    menor = 10;
    
    while (i <= 5)
    {    
         printf("\nDigite um valor para o numero %d de 0 a 100: ",i);
         scanf("%d", &numero);

         if (numero < menor)
         {
             menor = numero;           
         }
         i++;
    } 
    printf("\nA menor nota digitada foi: %d ", menor);
    
    system("PAUSE >> NULL");
    
    return 0;    
}

