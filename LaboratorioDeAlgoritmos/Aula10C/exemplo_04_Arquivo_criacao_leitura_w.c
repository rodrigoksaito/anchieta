#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arq;
    char linha[100];
    // Abre um arquivo TEXTO para LEITURA/GRAVA��O
    arq = fopen("arquivo.txt", "w+");
    if (arq == NULL)  // Se houve erro na abertura
    {
          printf("Problemas na abertura do arquivo\n");
          getch();
          exit(1);
    }
    do
    {
        gets(linha); // Le o texto digitado pelo usu�rio
        strcat(linha,"\n"); //Concatena uma quebra de linha
        fputs(linha,arq); //Grava o conte�do da vari�vel no arquivo
    }
    while(linha[0]!='\n');//Enquanto o primeiro caractere n�o for '\n'
    rewind(arq); //reposiciona o arquivo no in�cio
    printf("%s", "Leitura do arquivo:\n\n");
    while (!feof(arq))  //Fa�a enquanto n�o for o fim do arquivo
    {	// L� uma linha (inclusive com o '\n')
        fgets(linha, 99, arq);//o 'fgets' l� at� o caractere 99 ou o '\n'
        printf("%s", linha);
    }
    fclose(arq);
    getch();
    return 0;
}
