#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args)
{
system ("CHCP 1252 > NULL");

float notap1[10]={0}, notap2[10]={0}, mediaaluno[10]={0};
int i, aluno[10]= {1,2,3,4,5,6,7,8,9,10};

printf("Pela ordem numérica da chamada, vamos calcular a média de cada aluno: ");

//nota provas e médias individuais de cada aluno
for (i=0;i<10;i++)
{ 
printf("\n\n\t\tMédia do aluno %d. ", i+1);
printf("\nEscreva a nota da primeira prova do aluno: ", i+1);
scanf("%f", &notap1 [i]);
printf("Escreva a nota da segunda prova do aluno: ", i+1);

scanf("%f", &notap2 [i]);

mediaaluno[i] = (notap1[i] + notap2[i])/2;

printf("A media do aluno %d é: %.1f \nNota Prova 1: %.1f\nNota Prova 2: %.1f", aluno[i],mediaaluno[i], notap1[i], notap2[i]); 
}

//processamento media sala prova 1
float mediasalap1;
mediasalap1=(notap1[0]+notap1[1]+notap1[2]+notap1[3]+notap1[4]+notap1[5]+notap1[6]+notap1[7]+notap1[8]+notap1[9])/10;
printf("\n\n\nA média da primeira prova da sala foi: %.1f", mediasalap1);

//processamento media sala prova 2
float mediasalap2;
mediasalap2=(notap2[0]+notap2[1]+notap2[2]+notap2[3]+notap2[4]+notap2[5]+notap2[6]+notap2[7]+notap2[8]+notap2[9])/10;
printf("\nA média da segunda prova da sala foi: %.1f", mediasalap2);

//processamento media geral de provas da classe 
float mediageral;
mediageral=(mediasalap1+mediasalap2)/2;
printf("\n\n\nA média das duas provas da sala foi: %.1f", mediageral);

system("pause")

return 0;
}
