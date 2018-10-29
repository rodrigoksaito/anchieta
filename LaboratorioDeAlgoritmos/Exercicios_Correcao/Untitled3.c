#include <stdio.h>
#include <stdlib.h>

int main (char arg, char args [])
{
//Declaração de variáveis
float nota1[10], nota2[10], media1, media2, media_nota[10], media_total, soma1=0, soma2=0, soma_total;
int c;

printf("PROGRAMA QUE CALCULA ALGUMAS MEDIAS BASEADAS EM NOTAS DE ALGUNS ALUNOS (VALORES ENTRE 1 E 10)\n\n\n");

for(c=1; c<=10; c++)
{
printf("Informe a nota do %do aluno na primeira classe: ", c);
scanf("%f", &nota1[c]);
soma1=soma1 + nota1[c];
fflush(stdin);
}
printf("\n");
fflush(stdin);
for(c=1; c<=10; c++)
{
printf("Informe a nota do %do aluno na segunda classe: ", c);
scanf("%f", &nota2[c]);
soma2=soma2 + nota2[c];
fflush(stdin);
}
for(c=1; c<=10; c++)
{
media_nota[c] = (nota1[c] + nota2[c])/2;
}

media1 = soma1/10;
media2 = soma2/10; 
soma_total=soma1+soma2;
media_total=soma_total/20;

system("cls");

for(c=1; c<=10; c++)
{
printf("\nNota do %do aluno da primeira classe: %.2f", c, nota1[c]);
printf("\nNota do %do aluno da segunda classe: %.2f", c, nota2[c]);
printf("\nMedia dessas duas notas: %.2f", media_nota[c]); 
system("pause >> ok");
system("del ok");
printf("\n");
}

system("cls");
printf("Media de todas as notas da primeira classe: %.2f", media1);
printf("\nMedia de todas as notas da segunda classe: %.2f", media2);
printf("\n\nMedia de todas as notas informadas: %.2f", media_total);


system("pause >> ok");
system("del ok");
return 0;
}
