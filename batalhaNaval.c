#include <stdio.h>


int main() {
    

//char para criar o array
char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
int linhaNavioHor = 6;
int colunaNavioHor = 1;
int linhaNavioVer = 2;
int colunaNavioVer = 6;
int linhaNavioDigD = 1;
int colunaNavioDigD = 1;
int linhaNavioDigE = 6;
int colunaNavioDigE = 7;
//matriz 10x10
int i, j, Tabuleiro[10][10];
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        Tabuleiro[i][j] = 0;
    }
    
}


//navio na horizontal
for (int i = 0; i < 3; i++)
{
    Tabuleiro[linhaNavioHor][colunaNavioHor + i] = 3;
}
//navio na vertical
for (int i = 0; i < 3; i++)
{
    Tabuleiro[linhaNavioVer + i][colunaNavioVer] = 3;
}
//navio na diagonal
for (int i = 0; i < 3; i++)
{
    Tabuleiro[linhaNavioDigD + i][colunaNavioDigD +i] = 3;
}
//navio na diagonal
for (int i = 0; i < 3; i++)
{
    Tabuleiro[linhaNavioDigE + i][colunaNavioDigE - i] = 3;
}



//comando para imprimir a linha
printf("Tabuleiro Batalha Naval\n");
printf("  ");
for ( i = 0; i < 10; i++)
{
    printf("%c ", linha[i]);
}
printf("\n");


//for para mostrar a matriz
for (int i = 0; i < 10; i++){
    printf("%d ", i + 1);
    for (int j = 0; j < 10; j++){
        if (Tabuleiro[i][j] == 0){
        printf("0 ");
        }else{
        printf("3 ");
        }
    }
    printf("\n");
}



    return 0;
}
