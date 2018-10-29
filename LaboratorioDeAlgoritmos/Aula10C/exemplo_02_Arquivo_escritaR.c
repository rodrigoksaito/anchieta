#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *arq;
    char linha[100];

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("arquivo.txt", "r");
    if (arq == NULL)  //Se houve erro na abertura
    {
          printf("Problemas na abertura do arquivo\n");
          getch();
          exit(1);
    }

    while (!feof(arq))  //Fa�a enquanto n�o for o fim do arquivo
    {	// L� uma linha (inclusive com o '\n')
        fgets(linha, 99, arq); //l� at� o caractere 99 ou o '\n'
        printf("%s", linha);
    }
    fclose(arq);
    getch();
    return 0;
}
