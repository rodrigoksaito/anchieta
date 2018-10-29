#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

void LeVetor(int vet[]);
void ImprimeVetor(int vet[]);
void OrdenaVetor(int v[]);
int PesquisaBinaria(int v[], int pesq);
int MontaMenu();

int main(int argc, char *argv[])
{
    int vet[tamanho];
    int opcao, pos, procura;
    //Lê a vetor
    LeVetor(vet);
    //Ordena o vetor
    OrdenaVetor(vet);

    do
    {
        opcao=MontaMenu();//Monta o menu com as opcoes

        if (opcao==1)//imprime vetor
        {
            ImprimeVetor(vet);
            getch();
        }
        else if (opcao==2)//busca binaria
        {
            printf ("\nDigite um valor para pesquisar: ");
            scanf("%d",&procura);
            pos=PesquisaBinaria(vet,procura);
            if (pos==-1)
            {
                printf("\n\nValor nao encontrado no vetor!");
            }
            else
            {
                printf("\n\nValor encontrado na posicao %d", pos+1);
            }
            getch();
        }
    }
    while (opcao!=0);

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
/*---------------------------------------------
Ordena o vetor utilizando o método Bubble Sort
-----------------------------------------------*/
void OrdenaVetor(int v[])
{
      int i,j,aux;

      //for (i=0;i<tamanho;i++)
      for (i=0;i<tamanho-1;i++)
      {
          for (j=i+1;j<tamanho;j++)
              {
                  if (v[i] > v[j])
                  {
                      aux=v[i];
                      v[i]=v[j];
                      v[j]=aux;
                   }
              }
      }

 }

/*---------------------------------------------------
Algorítmo de Busca Binária como parâmetro recebe o
vetor e o valor a ser procurado
-----------------------------------------------------*/
int PesquisaBinaria(int v[], int pesq)
{
     int comeco = 0; //Limite inferior (em C o índice inicial é zero)
     int final = tamanho-1; //Limite superior (tamanho do vetor -1 porque o índice inicial é zero )
     int meio;
     while (comeco <= final)
     {
          //meio = comeco + (final-comeco)/2;
          meio = (comeco + final)/2;
          if (pesq == v[meio])
               return meio;
          else if (pesq < v[meio])
               final = meio-1;
          else
               comeco = meio+1;
     }
     return -1;   // não encontrado
}


//Exibe o menu de opções na tela
int MontaMenu()
{
     int opcao;
     system("cls");
     printf("BUSCA BINARIA\n");
     printf("_____________\n\n");
     printf("Digite a opcao desejada:\n\n");
     printf("[1] Ver o vetor ordenado\n");
     printf("[2] Pesquisar um valor\n");
     printf("[0] Sair\n\n");
     printf("Digite a opcao desejada: ");
     fflush(stdin);
     scanf("%d", &opcao);
     return opcao;
}
