#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
   int cdias = 1;
   float temp, atemp = 0;
   while (cdias<=7)
   {
      printf("Informe a temperatura do %do. dia: ", cdias);
      scanf("%f", &temp);

      atemp = atemp + temp;

      cdias = cdias + 1;

   }

   printf("Temp. media da semana: %f\n\n", atemp/(cdias-1));

   system("pause");
   return 0;
}

