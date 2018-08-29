/* Exemplo de Comando if’s aninhados (exemplo 3)*/

#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args )
{
    //declaracao de variaveis
    float nota;
         
    //entrada
    printf("Digite uma nota de 0 a 10: ");
    fflush(stdin);
    scanf("%f", &nota);
    
    //Condicional
    if ((nota >= (float)0) && (nota <= (float)3.4))
       printf("\nAluno reprovado!");
    else if ((nota >= (float)3.5 ) && (nota <= (float)4.9))
       printf("\nAluno de recuperacao");
    else if ((nota >= (float)5.0 ) && (nota <= (float)10.0))
    {
       printf("\nAluno aprovado!");
       if (nota == (float)10.0)
       {
           printf("\nAtingiu nota maxima! Parabens!");
       }
    }
    else 
       printf("\nNota invalida!");

    system("PAUSE >> null");
                
    return 0;    
}

