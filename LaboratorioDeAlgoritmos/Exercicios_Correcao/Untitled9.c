#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


setlocale(LC_ALL, "Portuguese_Brazil");

int vetornotas1[10], vetornotas2[10], somaprova1=0, somaprova2=0, somageral=0, i;
float vetornotas3[10];

//coleta de dados do vetor da 1� prova
for(i=0; i<= 9;i++)
{
printf("Informe a nota do aluno de n� %d na 1� prova = \n", i+1);
scanf("%d", &vetornotas1[i]);
system("cls");
}

//coleta de dados do vetor da 2� prova
for(i=0; i<= 9;i++)
{
printf("Informe a nota do aluno de n� %d na 2� prova = \n", i+1);
scanf("%d", &vetornotas2[i]);
system("cls");
}

//armazenamento da m�dia dos vetores da 1� e 2� prova
for(i=0; i<= 9;i++)
{ 
vetornotas3[i] = (vetornotas1[i] + vetornotas2[i])/2.0;
}

//exibi��o do resultado de cada aluno
printf("RESULTADOS\n\n");


for(i=0; i<= 9;i++)
{
printf("Aluno n� %d obteve o seguinte resultado:\nNota da 1� prova: %d\nNota da 2� prova: %d\nM�dia: %.2f\n\n", i+1, vetornotas1[i], vetornotas2[i], vetornotas3[i]);
}

//c�lculo e exibi��o da m�dia da 1� prova
for(i=0; i<= 9;i++)
{ 
somaprova1 = somaprova1+ vetornotas1[i];
}

printf("M�dia das notas da 1� prova: %.2f\n", (float)somaprova1/10);

//c�lculo e exibi��o da m�dia da 2� prova
for(i=0; i<= 9;i++)
{ 
somaprova2 = somaprova2+ vetornotas2[i];
}

printf("M�dia das notas da 2� prova: %.2f\n", (float)somaprova2/10);

//c�lculo e exibi��o da m�dia geral
somageral = somaprova1 + somaprova2;

printf("M�dia geral das provas: %.2f\n", (float)somageral/20);

system("pause > null");

}
