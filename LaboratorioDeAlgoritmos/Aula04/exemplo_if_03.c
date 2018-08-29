/* Exemplo de Comando if e else */

#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args )
{
    //declaracao de variaveis
    char sexo;
         
    //entrada
    printf("Digite [M] para masculino ou [F] para feminino: ");
    fflush(stdin);
    scanf("%c", &sexo);
    
    //Condicional
    if ((sexo == 'M') || (sexo == 'm'))
       printf("\nMasculino");
    else
       printf("\nFeminimo");
                    
    system("PAUSE >> null");
                
    return 0;    
}

