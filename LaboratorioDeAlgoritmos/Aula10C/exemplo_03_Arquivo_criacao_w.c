#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    FILE *arq;
    char texto[100];

    // Abre um arquivo TEXTO para GRAVA��O
    arq = fopen("arquivo2.txt", "w");
    if (arq == NULL)  // Se houve erro na abertura
    {
          printf("Problemas na abertura do arquivo\n");
          getch();
          exit(1);
    }

    do
    {
        gets(texto); // Le o texto digitado pelo usu�rio
        strcat(texto,"\n"); //Concatena uma quebra de linha
        fputs(texto,arq); //Grava o conte�do da vari�vel no arquivo
    }
    while(texto[0]!='\n');//Enquanto o primeiro caractere n�o for '\n'

    fclose(arq);
    printf("%s", "Arquivo gravado com sucesso!");
    getch();
    return 0;
}
