#include <stdio.h>
#include <stdlib.h>
int main(int arg, char * args [])
{

int i = 1;
int j = 1;
float sal1[10]; //salario da empresa 1.
float md1, md2, mdg; // media da empresa 1, 2 e geral.
float sal2[10]; //salario da empresa 2.
float sm1 = 0, sm2 = 0; // soma dos salarios das empresas 1 e 2.

printf("\nCalculo de media de salarios.");
for (i; i <=10; i++)
{
printf("\n\nDigite o salario do %d funcionario da empresa 1: ", i);
fflush(stdin);
scanf("%f", &sal1[i]);
sm1 = sal1[i] + sm1;

}
printf("\n\n");

for (j; j<=10; j++) 
{
printf("\n\nDigite o salario do %d funcionario da empresa 2: ", j);
fflush(stdin);
scanf("%f", &sal2[j]);
sm2 = sal2[j] + sm2;
} 
md1 = sm1/10;
md2 = sm2/10;

printf("\nMedia salarial da empresa 1: %.2f", md1);
printf("\nMedia salarial da empresa 2: %.2f", md2);

mdg = (sm1 + sm2) /20;
printf("\n\nMedia geral dos salarios entre as 2 empresas: %.2f", mdg);

system("PAUSE >> null");
return 0;
}
