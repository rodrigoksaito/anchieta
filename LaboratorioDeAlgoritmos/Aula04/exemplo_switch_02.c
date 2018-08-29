/* Exemplo 2 de utilizacao do switch */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int arg, char * args )
{ 
    char letra;
    
    printf ("\n[A] - Data do Sistema Operacional ");
    printf ("\n[B] - Hora do Sistema Operacional ");
    printf ("\n[C] - Lista arquivos no diretorio corrente ");
    printf ("\n\nDigite a letra do comando a ser executado: ");
    
    fflush(stdin);
    scanf ("%c", &letra);
    letra = toupper(letra); 
	
	switch (letra) 
    { 
        case 'A': system("DATE"); 
                  break;
        case 'B': system("TIME");
                  break; 
        case 'C': system("DIR");
                  break; 
        default: printf ("\nComando inválido!"); 
    } 
    
    system("PAUSE >> null");
                
    return 0;    
}
