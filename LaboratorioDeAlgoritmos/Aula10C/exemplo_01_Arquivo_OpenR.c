#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *arq;

    arq = fopen("Arquivo.txt", "rb"); //abre o arquivo

    if (arq == NULL)
    {
        printf("Problemas na Leitura do Arquivo\n");
        getch();
        exit(1);
    }
    else
    {
        printf("Leitura feita com sucesso!");
    }

    fclose(arq); //fecha o arquivo
    getch();
    return 0;
}
