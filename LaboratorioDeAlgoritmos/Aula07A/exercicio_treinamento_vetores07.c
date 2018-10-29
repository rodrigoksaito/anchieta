#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int vetor[10];
   int i;
   
   //seed (semente)
   srand(time(NULL));
   
   //geracao de numeros aleatorios até 100
   for (i=0;i<10;i++)
       vetor[i] = rand() % 100;    
   
   for (i=0;i<10;i++)
       printf ("\nPosicao vetor[%d] = %d", i, vetor[i]);

   system("pause >> null");
}

