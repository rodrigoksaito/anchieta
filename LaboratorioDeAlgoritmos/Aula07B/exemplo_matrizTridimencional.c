#include <stdio.h>
#include <stdlib.h>
 
int main(char arg, char * args[])
{
       int linha, coluna, tabela;
 
       float valores[2][3][5] = {
                         {{1.0, 2.0, 3.0, 4.0, 5.0},
                          {6.0, 7.0, 8.0, 9.0, 10.0},
                          {11.0, 12.0, 13.0, 14.0, 15.0}},
 
                          {{16.0, 17.0, 18.0, 19.0, 20.0},
                           {21.0, 22.0, 23.0, 24.0, 25.0},
                           {26.0, 27.0, 28.0, 29.0, 30.0}}
                                };
 
       for (linha = 0; linha < 2; linha++)
         for (coluna = 0; coluna < 3; coluna++)
           for (tabela = 0; tabela < 5; tabela++)
             printf("valores[%d][%d][%d] = %f\n", linha, coluna, tabela,
                valores[linha][coluna][tabela]);
    
    system("Pause >> null");
    return 0;
    
} /*fim do programa*/


