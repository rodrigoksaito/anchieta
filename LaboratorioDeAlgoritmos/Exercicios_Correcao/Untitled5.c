#include <stdio.h>
#include <stdlib.h>

int main()
{
//declaração de variaveis

float sal_empresa1[10], sal_empresa2[10],media_func[10],media[3];
int i;

printf("MEDIA SALARIAL ENTRE EMPRESA1 E EMPRESA2\n\n");
printf("|+|EMPRESA1|+|\n\n");
//Lê os salarios da empresa 1
for(i=0;i<10;i++)
{
printf("Informe o salario do funcionario %d: ",i+1);
scanf("%f",&sal_empresa1[i]);
}

system("pause");
system("cls");
printf("|+|EMPRESA2|+|\n\n");

//Lê os salarios da empresa 2
for(i=0;i<10;i++)
{
printf("Informe o salario do funcionario %d: ",i+1);
scanf("%f",&sal_empresa2[i]);
} 
system("pause");
system("cls");

//Media Salarial entre os fincionarios

printf("Media salarial de cada funcionario\n");
for(i=0;i<10;i++)
{ 
media_func[i]=(sal_empresa1[i]+sal_empresa2[i])/2;
printf("Funcionario%d|Salario EMPRESA1=%5.2f|Salario EMPRESA2=%5.2f|Media=R$%5.2f\n\n",i+1,sal_empresa1[i],sal_empresa2[i],media_func[i]);
}

printf("\n\n");

//Meida dos salarios da empresa 1
media[0]= (sal_empresa1[0]+sal_empresa1[1]+sal_empresa1[2]+sal_empresa1[3]+sal_empresa1[4]+sal_empresa1[5]+sal_empresa1[6]+sal_empresa1[7]+sal_empresa1[8]+sal_empresa1[9])/10;
printf("MEDIA SALARIAL DA EMPRESA1 = R$%5.2f \n",media[0]);

//Media dos salarios da empresa 2
media[1]=(sal_empresa2[0]+sal_empresa2[1]+sal_empresa2[2]+sal_empresa2[3]+sal_empresa2[4]+sal_empresa2[5]+sal_empresa2[6]+sal_empresa2[7]+sal_empresa2[8]+sal_empresa2[9])/10;
printf("MEDIA SALARIAL DA EMPRESA2= R$%5.2f\n",media[1]);

//Media das duas empresas
media[2]= (media[0]+media[1])/2;
printf("MEDIA SALARIAL DAS DUAS EMPRESAS R$:%5.2f", media[2]);
system("pause>null");
return 0;
}
