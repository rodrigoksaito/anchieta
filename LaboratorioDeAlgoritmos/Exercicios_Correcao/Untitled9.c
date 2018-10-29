#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


setlocale(LC_ALL, "Portuguese_Brazil");

int vetornotas1[10], vetornotas2[10], somaprova1=0, somaprova2=0, somageral=0, i;
float vetornotas3[10];

//coleta de dados do vetor da 1ª prova
for(i=0; i<= 9;i++)
{
printf("Informe a nota do aluno de nº %d na 1ª prova = \n", i+1);
scanf("%d", &vetornotas1[i]);
system("cls");
}

//coleta de dados do vetor da 2ª prova
for(i=0; i<= 9;i++)
{
printf("Informe a nota do aluno de nº %d na 2ª prova = \n", i+1);
scanf("%d", &vetornotas2[i]);
system("cls");
}

//armazenamento da média dos vetores da 1ª e 2ª prova
for(i=0; i<= 9;i++)
{ 
vetornotas3[i] = (vetornotas1[i] + vetornotas2[i])/2.0;
}

//exibição do resultado de cada aluno
printf("RESULTADOS\n\n");


for(i=0; i<= 9;i++)
{
printf("Aluno nº %d obteve o seguinte resultado:\nNota da 1ª prova: %d\nNota da 2ª prova: %d\nMédia: %.2f\n\n", i+1, vetornotas1[i], vetornotas2[i], vetornotas3[i]);
}

//cálculo e exibição da média da 1ª prova
for(i=0; i<= 9;i++)
{ 
somaprova1 = somaprova1+ vetornotas1[i];
}

printf("Média das notas da 1ª prova: %.2f\n", (float)somaprova1/10);

//cálculo e exibição da média da 2ª prova
for(i=0; i<= 9;i++)
{ 
somaprova2 = somaprova2+ vetornotas2[i];
}

printf("Média das notas da 2ª prova: %.2f\n", (float)somaprova2/10);

//cálculo e exibição da média geral
somageral = somaprova1 + somaprova2;

printf("Média geral das provas: %.2f\n", (float)somageral/20);

system("pause > null");

}
