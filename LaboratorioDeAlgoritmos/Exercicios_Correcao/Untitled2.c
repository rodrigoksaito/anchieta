#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int arg, char * args){


float salarios1[11], salarios2[11], media[11];
float soma, mediaone, mediatwo, media_geral;
int a,b,c;


for(a = 1 ; a < 11 ; a++){
printf("Digite o salario do funcionario %d da empresa One: ", a);
scanf("%f", &salarios1[a]);
}

printf("\n\n");

for(b = 1 ; b < 11 ; b++){ 
printf("Digite o salario do funcionario %d da empresa Two: ", b);
scanf("%f", &salarios2[b]);
}

system("cls");

// Aqui era para o vetor media receber a media entre os salarios dos funcionarios, porem não reconhece. 
for(c = 1 ; c < 11 ; c++){

media[c] = (salarios1[a] + salarios2[b]) /2 ;
printf("\nMedia dos funcionario %d das empresas One e Two: %.2f", c, media );
}

// obtem a média da empresa ONE
soma = 0;
for (a=1; a<11; a++){
soma += salarios1[a];
mediaone = soma / 10;
}
printf("\n\n");
printf("\nMedia salarial dos funcionarios da empresa One: %.2f", mediaone);

// obtem a média da empresa TWO
soma = 0;
for (b=1; b<11; b++){
soma += salarios2[b];
mediatwo = soma / 10;
} 

printf("\n");
printf("\nMedia salarial dos funcionarios da empresa Two: %.2f", mediatwo);

media_geral = (mediaone + mediatwo) / 2; // Usa as médias por empresa e mostra a geral quando dividido pelas empresas 

printf("\n");
printf("\nMedia salarial dos funcionarios entre as empresas One e Two: %.2f", media_geral); 

getch();
}
