#include <stdio.h>

struct endereco //Cria��o da estrutura de Endere�o
{
    char logradouro[50];
    char cidade[30];
    char estado[2];
    long int cep;
};

int main(int argc, char *argv[])
{
    struct endereco infoEndereco; //declara vari�vel do tipo estrutura

    puts("Informe o logradouro: "); //Leitura dos dados
    gets(infoEndereco.logradouro);
    puts("Informe a cidade: ");
    gets(infoEndereco.cidade);
    puts("Informe o estado: ");
    gets(infoEndereco.estado);
    puts("Informe o CEP: ");
    scanf("%d",&infoEndereco.cep);

    //Exibi��o da informa��o.
    printf("\n\nEndereco: %s, %s - %s CEP: %d", infoEndereco.logradouro,
    infoEndereco.cidade, infoEndereco.estado, infoEndereco.cep);

    system("PAUSE>>NULL");
    return 0;
}
