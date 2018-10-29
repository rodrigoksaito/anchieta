#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

void LeVetor(int vet[]);
void ImprimeVetor(int vet[]);
int PesquisaSequencial(int v[], int pesq);

int main(int argc, char *argv[])
{
    int vet[tamanho];
    int pos, procura;
    //Lê a vetor
    LeVetor(vet);

    printf ("\nDigite um valor para pesquisar: ");
    scanf("%d",&procura);
    //Imprime o vetor na tela
    ImprimeVetor(vet);

    pos=PesquisaSequencial(vet,procura);
    if (pos==-1)
    {
        printf("\n\nValor nao encontrado no vetor!");
    }
    else
    {
        printf("\n\nValor encontrado na posicao %d", pos+1);
    }

    printf("\n\n");
    system("PAUSE>>NULL");
    return 0;
}

/*-----------------------------------
Efetua a leitura do vetor
-------------------------------------*/
void LeVetor(int vet[])
{
      int i;
      for (i=0;i<tamanho;i++)
      {
          printf("Informe o valor %d: ", i+1);
          fflush(stdin);
          scanf("%d", &vet[i]);
      }
}

/*---------------------------------
Imprime o vetor na tela
-----------------------------------*/
void ImprimeVetor(int vet[])
{
      int i;
      for (i=0;i<tamanho;i++)
      {
          printf("%d\n", vet[i]);
      }
}

/*---------------------------------------------------
Busca sequencial
-----------------------------------------------------*/
int PesquisaSequencial(int v[], int pesq)
{
     int i;
     for(i=0;i<tamanho;i++)
     {
          if(v[i]==pesq)
          {
              return i;
          }
     }
     return -1;   // não encontrado
}
