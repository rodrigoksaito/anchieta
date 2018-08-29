/* Exemplo de utilizacao do operador ? */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //necessario para utilizar a funcao toupper

int main(int arg, char * args )
{
    //declaracao de variaveis
    char sexo;
         
    //entrada
    printf("Digite [M] para masculino ou [F] para feminino: ");
    fflush(stdin);
    scanf("%c", &sexo);
    
    toupper(sexo); //transforma o caracter em maiusculo
    
    sexo = 'M' ? printf("\nMasculino") : printf("\nFeminino");
    
    system("PAUSE >> null");
                
    return 0;    
}

