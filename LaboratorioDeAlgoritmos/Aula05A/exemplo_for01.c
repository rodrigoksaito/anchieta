#include <stdio.h>

int main()
{
   int cdias;
   float temp, atemp;

   atemp = 0;
   for (cdias = 1; cdias<=7; cdias++)
   {
      printf("Informe a temperatura do %do. dia: ", cdias);
      scanf("%f", &temp);

      atemp += temp;
   }

   printf("Temp. media da semana: %f\n\n", atemp/(cdias-1));

   system("pause");
   return 0;
}

