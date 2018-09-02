#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
   float sal, novosal;
   char cont;
   do
   {
      printf("Informe o salario atual: ");
      scanf("%f", &sal);

      if (sal>=1000)
         novosal = sal * 1.05;
      else
         novosal = sal * 1.07;

      printf("Novo salario: %f\n\n", novosal);

      printf("Continuar? (S) Sim, (N) Nao ");
      getchar();        /* limpar o <enter> do scanf anterior */
      cont = getchar(); /* aguarda a resposta do usuário */
   }
   while (cont=='S');
   return 0;
}
