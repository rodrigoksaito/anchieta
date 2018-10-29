/*  Faz a media de 10 idades utilizando vetor,
    com laco "for" */

#include <stdio.h>
#include <stdlib.h>
int main(int arg, char * args )
{
    //declaracao de variaveis
    int idade[10];
    int i, soma;
    float media;
    
    //entrada
    for (i=0; i<10; i++)
    {
        printf("Digite a idade %d: ", i+1);
        scanf("%d", &idade[i]);
    }

    //processamento
    soma = 0;
    for (i=0; i<10; i++)
        soma += idade[i];
    
    media = soma / 10;
    //saida
    printf("\nMédia das idades: %.2f", media);
        
    system("PAUSE >> null");
                
    return 0;    
}


