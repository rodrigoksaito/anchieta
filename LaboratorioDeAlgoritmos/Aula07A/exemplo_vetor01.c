int main()
{
   int numeros[10], i, maior;

   // Carregando o vetor com os valores
   // digitados pelo usu�rio
   for (i=0;i<10;i++)
   {
      printf("Informar o %io. numero de 10: ", i+1);
      scanf("%d", &numeros[i]);
   }

   // Loop para procurar o maior n�mero
   maior = 0;
   for (i=0;i<10;i++)
      if (numeros[i]>maior)
         maior = numeros[i];
   printf("Maior numero digitado: %i\n\n", maior);

   system("pause");   
}



