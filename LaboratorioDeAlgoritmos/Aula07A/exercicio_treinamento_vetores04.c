/*  Faz a soma de 5 idades inteiras utlizando vetor,
    com o laco for   */
#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args )
{
    //declaracao de variaveis
    int idade[5];
    int i, soma;
    
    //entrada
    for (i=0; i<=4; i++)
    {
        printf("Digite a idade %d e 5: ", i+1);
        scanf("%d", &idade[i]);
    }

    //processamento
    soma = 0;
    
    for (i=0; i<=4; i++)
        soma += idade[i];
    
    //saida
    printf("\nSoma das idades: %d", soma);
        
    system("PAUSE >> null");
                
    return 0;    
}

