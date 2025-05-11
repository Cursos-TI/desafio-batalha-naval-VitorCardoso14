#include <stdio.h>

//Declarar a matriz sem ter que escrever numero por numero
#define LINHAS 10
#define COLUNAS 10
#define AGUA 0
#define NAVIO 3

int main() {
    

//char para criar o array
char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

//matriz 10x10
int i, j, k, Tabuleiro[LINHAS][COLUNAS];
int linhaNavio1 = 4;
int colunaNavio1 = 3;
int tamanhoNavio1 = 2;

//comando para imprimir a linha
printf("Tabuleiro Batalha Naval\n");
printf("  ");
for ( i = 0; i < 10; i++)
{
    printf("%c ", linha[i]);
}
printf("\n");

for (int k = 0; k < tamanhoNavio1; k++) {
    if (colunaNavio1 + k < COLUNAS) {
        Tabuleiro[linhaNavio1][colunaNavio1 + k] = NAVIO;
    }
}


//for para mostrar a matriz
for (i = 0; i < LINHAS; i++)
{
    printf("%d ", i + 1);
    for ( j = 0; j < COLUNAS; j++)
    {
      printf("%d ", Tabuleiro[i][j] = AGUA);
    }
    printf("\n");
}




    return 0;
}
