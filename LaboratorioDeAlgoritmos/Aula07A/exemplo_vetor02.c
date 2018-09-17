#define QTD_NUMEROS 10

int main()
{
   int numeros[QTD_NUMEROS], i, maior;

   // Carregando o vetor com os valores
   // digitados pelo usuário
   for (i=0; i< QTD_NUMEROS; i++)
   {
      printf("Informar o %io. numero de 10: ", i+1);
      scanf("%d", &numeros[i]);
   }

   // Loop para procurar o maior número
   maior = 0;
   for (i=0;i<QTD_NUMEROS;i++)
      if (numeros[i]>maior)
         maior = numeros[i];
   printf("Maior numero digitado: %i\n\n", maior);

   system("pause");   
}


