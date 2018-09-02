/*
Faça um programa que leia 4 numeros inteiros de 0 a 100 
mostre o valor ao cubo do maior numero lido;
*/

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args[])
{
    //declaracao de variáveis
    int i, numero;
    int maior, result;
       
    maior = 0;
    
    for (i=0;i<=3;i++)
    {    
         printf("\nDigite um valor para o numero %d de 0 a 100: ",i);
         scanf("%d", &numero);

         if (numero > maior)
         {
             numero = maior;           
         }
    } 
    
    result = maior * 3;
    printf("\nO resultado da maior nota elevada ao cubo: %d ", result);
    
    system("PAUSE >> NULL");
    
    return 0;    
}

