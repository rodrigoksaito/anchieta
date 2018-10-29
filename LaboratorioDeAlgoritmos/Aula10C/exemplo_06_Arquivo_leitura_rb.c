#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arq;
    int i;
    float f;
    double d;

    // Abre um arquivo TEXTO para LEITURA BINÁRIA
    arq = fopen("arquivo.txt", "rb");
    if (arq == NULL)  // Se houve erro na abertura
    {
          printf("Problemas na abertura do arquivo\n");
          getch();
          exit(1);
    }
    printf("%s", "Leitura do arquivo:\n\n");
    //Le o valor do arquivo e joga na variável
    fread(&i, sizeof(int), 1, arq);
    fread(&f, sizeof(float), 1, arq);
    fread(&d, sizeof(double), 1, arq);
    printf ("%d - %f - %f", i, f, d);
    fclose(arq);
    getch();
    return 0;
}
