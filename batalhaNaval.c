#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

int main() {
    

//char para criar o array
char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
int linhaNavioHor;
int colunaNavioHor;
int linhaNavioVer = 2;
int colunaNavioVer = 6;
int linhaNavioDigD = 1;
int colunaNavioDigD = 1;
int linhaNavioDigE = 6;
int colunaNavioDigE = 7;
//habilidade
int habilidadeCone1 = 2;
int habilidadeCone1a = 3;
int habilidadeCone2 = 3;
int habilidadeCone2a = 2;
int habilidadeCone3 = 4;
int habilidadeCone3a = 1;

//apenas para testar o conhecimento
printf("Escolha a linha do navio horizontal: ");
scanf("%d", &linhaNavioHor);
printf("Escolha a coluna do navio horizontal: ");
scanf("%d", &colunaNavioHor);

//matriz 10x10
int i, j, Tabuleiro[LINHAS][COLUNAS];
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        Tabuleiro[i][j] = AGUA;
    }
    
}

//usando o for e o if para so colocar o navio caso o numero da coluna + k seja menos que a coluna para passar
for (int k = 0; k < 3; k++) {
if (colunaNavioHor + k < COLUNAS) {
        Tabuleiro[linhaNavioHor][colunaNavioHor + k] = NAVIO;
    }
}
//usando o for e o if para so colocar o navio caso o numero da coluna + k seja menos que a coluna para passar
for (int k = 0; k < 3; k++) {
if (colunaNavioVer + k < LINHAS) {
        Tabuleiro[linhaNavioVer + k][colunaNavioVer] = NAVIO;
    }
}

//navio na diagonal usando apenas o for
for (int i = 0; i < 3; i++)
{
    Tabuleiro[linhaNavioDigD + i][colunaNavioDigD +i] = 1;
}
//navio na diagonal usando apenas o for
for (int i = 0; i < 3; i++)
{
    Tabuleiro[linhaNavioDigE + i][colunaNavioDigE - i] = 1;
}

//adicionando a habilidade

//cone
for (int i = 0; i < 1; i++)
{
    Tabuleiro[habilidadeCone1][habilidadeCone1a] = 2;
}
for (int i = 0; i < 3; i++)
{
    Tabuleiro[habilidadeCone2][habilidadeCone2a + i] = 2;
}
for (int i = 0; i < 5; i++)
{
    Tabuleiro[habilidadeCone3][habilidadeCone3a + i] = 2;
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
        }else if (Tabuleiro[i][j] == 2){
        printf("5 ");
        }
        else{
        printf("3 ");
        }
    }
    printf("\n");
}



    return 0;
}
