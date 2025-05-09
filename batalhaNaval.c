#include <stdio.h>



int main() {
//char para criar o array
char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
//matriz 10x10
int i, j, Tabuleiro[10][10] = {
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,3,3,3,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
};

//comando para imprimir a linha
printf("Tabuleiro Batalha Naval\n");
printf("  ");
for ( i = 0; i < 10; i++)
{
    printf("%c ", linha[i]);
}
printf("\n");

//for para mostrar a matriz
for (i = 0; i < 10; i++)
{
    printf("%d ", i + 1);
    for ( j = 0; j < 9; j++)
    {
        printf("%d ", Tabuleiro[i][j]);
    }
    printf("%d\n", Tabuleiro[i][j]);
}



    return 0;
}
