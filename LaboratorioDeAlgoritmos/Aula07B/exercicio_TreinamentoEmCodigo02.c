#include <stdio.h>
#include <stdlib.h>
 
int main(char arg, char * args[])
{
    char vet1[37]="Estou aprendendo a programar em C!!!";
    char vet2[]="Estou aprendendo a programar em C!!!"; //vetor não-dimensionado
 
    printf("O vetor abaixo foi declarado com o seu tamanho especificado\n");
    printf("%s\n",vet1);
    printf("\n");
    printf("E este outro foi declarado com o seu tamanho nao especificado\n");
    printf("%s\n",vet2);
 
    system("Pause >> null");
    return 0;
    
} /*fim do programa*/


