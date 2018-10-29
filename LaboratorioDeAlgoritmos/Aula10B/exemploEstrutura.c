#include <stdio.h>

struct endereco //Criação da estrutura de Endereço
{
    char logradouro[50];
    char cidade[30];
    char estado[2];
    long int cep;
};

int main(int argc, char *argv[])
{
    struct endereco infoEndereco; //declara variável do tipo estrutura

    puts("Informe o logradouro: "); //Leitura dos dados
    gets(infoEndereco.logradouro);
    puts("Informe a cidade: ");
    gets(infoEndereco.cidade);
    puts("Informe o estado: ");
    gets(infoEndereco.estado);
    puts("Informe o CEP: ");
    scanf("%d",&infoEndereco.cep);

    //Exibição da informação.
    printf("\n\nEndereco: %s, %s - %s CEP: %d", infoEndereco.logradouro,
    infoEndereco.cidade, infoEndereco.estado, infoEndereco.cep);

    system("PAUSE>>NULL");
    return 0;
}
