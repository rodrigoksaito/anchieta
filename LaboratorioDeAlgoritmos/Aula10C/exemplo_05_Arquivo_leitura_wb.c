#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arq;
    int i=123;
    float f=12.99;
    double d=178.9587;

    // Abre um arquivo TEXTO para GRAVAÇÃO BINÁRIA
    arq = fopen("arquivo.txt", "wb");
    if (arq == NULL)  // Se houve erro na abertura
    {
          printf("Problemas na abertura do arquivo\n");
          getch();
          exit(1);
    }
    //Grava o conteúdo das variáveis no arquivo
    fwrite(&i, sizeof(int), 1, arq);
    fwrite(&f, sizeof(float), 1, arq);
    fwrite(&d, sizeof(double), 1, arq);

    fclose(arq);
    getch();
    return 0;
}
