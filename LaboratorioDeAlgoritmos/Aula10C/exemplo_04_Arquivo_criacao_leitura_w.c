#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arq;
    char linha[100];
    // Abre um arquivo TEXTO para LEITURA/GRAVAÇÃO
    arq = fopen("arquivo.txt", "w+");
    if (arq == NULL)  // Se houve erro na abertura
    {
          printf("Problemas na abertura do arquivo\n");
          getch();
          exit(1);
    }
    do
    {
        gets(linha); // Le o texto digitado pelo usuário
        strcat(linha,"\n"); //Concatena uma quebra de linha
        fputs(linha,arq); //Grava o conteúdo da variável no arquivo
    }
    while(linha[0]!='\n');//Enquanto o primeiro caractere não for '\n'
    rewind(arq); //reposiciona o arquivo no início
    printf("%s", "Leitura do arquivo:\n\n");
    while (!feof(arq))  //Faça enquanto não for o fim do arquivo
    {	// Lê uma linha (inclusive com o '\n')
        fgets(linha, 99, arq);//o 'fgets' lê até o caractere 99 ou o '\n'
        printf("%s", linha);
    }
    fclose(arq);
    getch();
    return 0;
}
