#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

int main (int argc, char * argv[])
{
    int valor1, valor2, total;

    total = soma(valor1, valor2);

    printf("\nResult of sum: %d", total);

    system("pause >> null");

    return 0;
}

int soma(int a, int b)
{
    printf("\nType a value 1: ");
    scanf("%d",&a);

    printf("\nType a value 2: ");
    scanf("%d",&b);

    return a + b;
}

