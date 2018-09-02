#include <stdio.h>

int main()
{
   int cdias;
   float temp, atemp;

   cdias = 1;
   atemp = 0;
   while (cdias<=7)
   {
      printf("Informe a temperatura do %do. dia: ", cdias);
      scanf("%f", &temp);

      atemp += temp;
      cdias++;

   }

   printf("Temp. media da semana: %f\n\n", atemp/(cdias-1));

   system("pause");
   return 0;
}
