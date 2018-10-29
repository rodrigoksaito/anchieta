#include <stdio.h>
#include <stdlib.h>
 
int main(char arg, char * args[])
{
    int mat[2][2];
    float det;
    int x,y;
 
    printf("Este programa calcula a determinante de uma matriz quadrada de ordem 2");
    printf("\n\nEntre com os valores a da matriz:\n");
    
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            printf("mat[%d][%d]=",x+1,y+1);
            scanf("%d",&mat[x][y]);
        } /*fim do for*/
    } /*fim do for*/
 
    det=mat[0][0]*mat[1][1]-mat[1][0]*mat[0][1]; //formula para calcular a determinante
    printf("Determinante da matriz = %f\n",det); 
    
    system("Pause >> null");
    return 0;
    
} /*fim do programa*/


