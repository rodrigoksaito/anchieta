int main ()
{
   char resposta[]="ADA LOVELACE", tentativa[80];

   do
   {
      printf("Quem foi a primeira programadora? ");
      gets(tentativa);

      if (strcmp(resposta, tentativa) == 0)
         break; // se igual, usa o break
      else // dá mensagem e retorna para o início
         printf("\nResposta errada! Tente novamente.\n");

   } while(1); // condição de laço infinito

   printf ("\n\nParabens! Resposta correta!\n\n");

   system("pause");
}


