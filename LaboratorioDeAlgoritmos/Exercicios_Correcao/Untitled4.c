#include <stdio.h>
#include <stdlib.h>

int main ()
{
system("CHCP 1252 > NULL"); // acentua��o
float nota1[10], nota2[10], media[10], media_n1, media_n2, media_geral, soma1, soma2;
int a, i;

//entrada de notas
a = 1;
for (i=0; i<10; i++)
{
printf("Aluno %d", a++);
printf("\n\tDigite a 1� nota: ");
scanf("%f", &nota1[i]);
printf("\tDigite a 2� nota: ");
scanf("%f", &nota2[i]);

if (nota1[i] > 10 || nota2[i] > 10 || nota1[i] < 0 || nota2[i] < 0 )
{
printf("\nErro! Nota poss�vel entre 0 e 10. Favor digitar novo valor:\n\n");
a--;
i--;
continue; 
}
media[i] = (nota1[i] + nota2[i]) / 2;
system("cls"); // comando que limpa a tela ap�s digitar nota 1 e nota 2.
}

//c�lculo para m�dia das notas1, notas2 e m�dia geral de provas
soma1 = 0;
soma2 = 0;
for (i=0; i<10; i++)
{
soma1 += nota1[i];
media_n1 = soma1 / 10;

soma2 += nota2[i];
media_n2 = soma2 / 10;

media_geral = (soma1 + soma2) / 20;
}

//apresenta informa��es do Aluno nota1, nota2 e m�dia e tamb�m valor geral da nota1, nota2 e m�dia.
a = 1;
for (i=0; i<10; i++)
{
printf("\nNotas e M�dia do Aluno %d:", a++);
printf("\n\t1� Nota: %.2f", nota1[i]); 
printf("\n\t2� Nota: %.2f", nota2[i]);
printf("\n\tM�dia: %.2f\n", media[i]);
}

printf("\nM�dia Geral da 1� Nota: %.2f", media_n1);
printf("\nM�dia Geral da 2� Nota: %.2f", media_n2);
printf("\nM�dia Geral das Provas: %.2f", media_geral);

system ("PAUSE > null");
return 0;

}
