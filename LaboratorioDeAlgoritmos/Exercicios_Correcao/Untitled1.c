#include <stdio.h>
#include <stdlib.h>

int main (){

float salario1[10],salario2[10],media[10],mediasalario1,mediasalario2,mediageral;
int cont=1,parar=1;

system ( " CHCP 1252 >> NULL " ) ;

while(cont<11)

{

printf("O 1 Sal�rio do funcion�rio %d: ",cont);
fflush(stdin);
scanf("%f",&salario1[cont]);

printf("O 2 Sal�rio do funcion�rio %d: ",cont);
scanf("%f",&salario2[cont]);


//Verificar o salario
if(salario1[cont]>10000 || salario2[cont]>10000 ||salario1[cont]<1 || salario2[cont]<1)
{

printf("O salario minimo � R$1,00 e o maximo � R$10.000,00. ");
parar=0;
break;
}

media[cont] = (salario1[cont] + salario2[cont]) /2;

printf("A media do sal�rio do %d funcion�rio: : %.2f \n",cont,media[cont]);
printf("\n");
mediasalario1=mediasalario1+salario1[cont];
mediasalario2=mediasalario2+salario2[cont];

cont++;
}

if(parar!=0){

mediageral= mediasalario1 + mediasalario2;

printf("\n\nInforma��es Gerais \n");
printf("\n M�dia do 1 salario: %.2f",mediasalario1/10);
printf("\n M�dia do 2 salario: %.2f" ,mediasalario2/10);
printf("\n M�dia geral: %.2f",mediageral/20);

}
system("Pause >> Null");
return 0;

}
