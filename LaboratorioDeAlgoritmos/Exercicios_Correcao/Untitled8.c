#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args )
{
float salario1[10];
float salario2[10];
int i;
float media1, media2, mediatotal, soma;

{
for(i=0; i<10; i++)
{
printf("Digite o salario do %d funcionario da primeira empresa: ", i+1);
scanf("%f", &salario1[i]);
}

soma = 0;
for (i=0; i<10; i++)
soma += salario1[i];

media1 = soma /10;

printf("\nMEDIA DOS SALARIOS DA PRIMEIRA EMPRESA: %.2f\n\n", media1);
}

{
for(i=0; i<10; i++)
{
printf("Digite o salario do %d funcionario da segunda empresa: ", i+1);
scanf("%f", &salario2[i]);
}

soma = 0;
for (i=0; i<10; i++)
soma += salario2[i];

media2 = soma /10;

printf("\nMEDIA DOS SALARIOS DA SEGUNDA EMPRESA: %.2f\n\n", media2);
}

mediatotal = (media1 + media2) / 2;
printf("MEDIA DAS DUAS EMPRESAS: %.2f", mediatotal);

system("PAUSE >> null");

return 0;
}
