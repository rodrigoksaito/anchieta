#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *args[])
{
//Declaração de variáveis
float nota1[10], nota2[10]; 
float soma1=0, soma2=0, soma_total;
float media1, media2, media_nota[10], media_total;
int t;


printf("ALGORITIMO DE CALCULO DE NOTAS)\n");

for(t=1; t<=10; t++)
{
printf("POR FAVOR DIGITE A NOTA do %do ALUNO 1: ", t);
scanf("%f", &nota1[t]);
soma1=soma1 + nota1[t];
fflush(stdin);
}
printf("\n");
fflush(stdin);
for(t=1; t<=10; t++)
{
printf("POR FAVOR DIGITE A NOTA DO %do ALUNO 2: ", t);
scanf("%f", &nota2[t]);
soma2=soma2 + nota2[t];
fflush(stdin);
}
media1 = soma1/10;
media2 = soma2/10; 
soma_total=soma1+soma2;
media_total=soma_total/20;

system("cls");
printf("\n");

for(t=1; t<=10; t++)
{
media_nota[t] = (nota1[t]+ nota2[t])/2;
printf("\nNOTA do %do ALUNO 1: %.2f", t, nota1[t]);
printf("\nNOTA do %do ALUNO 2: %.2f", t, nota2[t]);
printf("\nMedia desses dois alunos: %.2f", media_nota[t]); 
}
system("pause");

system("cls");
printf("Media de todas as notas dos alunos 1: %.2f", media1);
printf("\nMedia de todas as notas dos alunos 2: %.2f", media2);
printf("\n\nMedia de todas as notas informadas: %.2f", media_total);


system("pause >> null");
return 0;
}
