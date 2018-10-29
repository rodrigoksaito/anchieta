#include<stdio.h>
#include<stdlib.h>

int main (int arg, char * args )
{
float nota1[10];
float nota2[10];
float media[10],mediap1=0 , mediap2=0 , mediaT=0;
int i,soma;


for (i=0;i<10;i++)
{
printf("\nescreva a nota da prova 1 do aluno %d: " , i+1);
fflush(stdin);
scanf("%f", &nota1[i]);
system("cls"); 
}


printf("\nagora escreva notas referente a prova 2");

for (i=0;i<10;i++)
{
printf("\nescreva a nota da prova 2 do aluno %d: " , i+1);
fflush(stdin);
scanf("%f", &nota2[i]);
system("cls"); 
}

for (i=0;i<10 ; i++)
{
soma = nota1[i]+nota2[i];
media[i]= soma/2;
}

for (i=0;i<10 ; i++)
{ 
printf("o aluno %d tirou a nota: %.1f na prova 1 e a nota: %.1f na prova 2 , media do aluno: %.1f \n\n", i+1 , nota1[i] , nota2[i], media[i]); 
}

soma=0;

for (i=0;i<10 ; i++)
{
soma += nota1[i]; 
}

mediap1= soma/10;

printf("a media das notas 1 e: %.1f \n",mediap1);


soma=0;
for (i=0;i<10 ; i++)
{
soma += nota2[i]; 
}

mediap2= soma/10;

printf("a media das notas 2 e: %.1f \n",mediap2);

soma=0;
for (i=0;i<10 ; i++)
{
soma += nota1[i]+nota2[i];
}

mediaT= soma/20;

printf("a media geral das notas da classe: %.1f\n", mediaT);

system("pause");
}
