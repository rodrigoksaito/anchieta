/* Exemplo de Comando if’s aninhados */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para utilizacao do strlen

int main(int arg, char * args )
{
    char *nome;
    char *hoje;
    
    nome = "anchieta";
    hoje = "TERCA";
    
    if ((strlen(nome) < 100) && (hoje == "SEGUNDA"))
    {
       printf("Nome e: %s\n", nome);
       printf("Hoje e: SEGUNDA\n");
    }
    else if ((strlen(nome) < 100) && (hoje == "TERCA"))
    {
       printf("Nome e: %s\n", nome);
       printf("Hoje e: TERCA\n");    
    }
    else
        printf("Dia da semana nao e SEGUNDA e nem TERCA");
    
    system("PAUSE >> null");
   
    return 0;    
} 

