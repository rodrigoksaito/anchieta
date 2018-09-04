#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int main (int arg, char * args[] )
{
    //Declaração de variaveis
    int idade, dia, mes, ano;
    float salario;
        
    //Processamento
    printf("Digite o valor da idade: ");   
    scanf("%d", &idade);
    
    printf("Digite a data de nascimento no formado dd/mm/aaaa: ");
    scanf("%d %*c %d %*c %d", &dia, &mes, &ano);
    
    printf("Digite o salario: ");
    scanf("%f", &salario);
    
    //Saída de dados
    printf("\n\nO valor da idade digitada foi: %d \n", idade);
    printf("A data digitada foi %d/%d/%d \n", dia, mes, ano);
    printf("O valor do salário informado foi: %f", salario);
    
    system("pause > NULL");
    return 0;
}


