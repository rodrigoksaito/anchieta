int main ()
{
   char resposta[]="ADA LOVELACE", tentativa[80];

   do
   {
      printf("Quem foi a primeira programadora? ");
      gets(tentativa);

      if (strcmp(resposta, tentativa) == 0)
         break; // se igual, usa o break
      else // d� mensagem e retorna para o in�cio
         printf("\nResposta errada! Tente novamente.\n");

   } while(1); // condi��o de la�o infinito

   printf ("\n\nParabens! Resposta correta!\n\n");

   system("pause");
}


