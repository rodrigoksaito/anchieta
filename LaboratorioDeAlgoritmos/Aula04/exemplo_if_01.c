#include <stdio.h>

int main(int arg, char * args )
{
    //declaracao de variaveis
    int nota;
        
    //atribuicao de valores    
    printf("Digite um valor inteiro de 0 a 10: ");
    fflush(stdin);
    scanf("%d", &nota);
    
    //Condicional
    if (nota >= 5)
       printf("\nAluno provado!");
    
    system("PAUSE >> null");
            
    return 0;    
}

