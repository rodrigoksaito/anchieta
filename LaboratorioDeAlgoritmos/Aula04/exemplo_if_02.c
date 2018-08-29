/*Exemplo de Comando if com mais de uma instrução*/

#include <stdio.h>
#include <stdlib.h>

int main(int arg, char * args )
{
    //declaracao de variaveis
    float salario;
    float desconto;
    float sal_liquido;
         
    //entrada
    printf("Digite o valor do salario: ");
    fflush(stdin);
    scanf("%f", &salario);
	
	//Condicional
    if (salario >= 1499.16)
    {
       //processamento
       desconto = (salario * 7.5) / 100;
       sal_liquido = salario - desconto;
 
       //saida
       printf("\nSalario digitado foi: %.2f", salario);
       printf("\nValor do desconto será de: %.2f", desconto);
       printf("\nO salario liquido será de: %.2f", sal_liquido);                
    }
    system("PAUSE >> null");
                
    return 0;    
}

