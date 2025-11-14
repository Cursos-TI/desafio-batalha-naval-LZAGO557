#include <stdio.h>

int main() {
    char *linha[7] = {"A","B","C","D","E","F","G"};
    int tabuleiro[7][7] = {0}; // tudo começa como água (0)

    // Navio 1 - Vertical
    int navio1_c[3] = {2, 2, 2}; // Coluna C
    int navio1_r[3] = {1, 2, 3}; // Linhas 2, 3, 4
    for (int i = 0; i < 3; i++) tabuleiro[navio1_r[i]][navio1_c[i]] = 3;

    // Navio 2 - Horizontal
    int navio2_c[3] = {4, 5, 6}; // Colunas E, F, G
    int navio2_r[3] = {4, 4, 4}; // Linha 5
    for (int i = 0; i < 3; i++) tabuleiro[navio2_r[i]][navio2_c[i]] = 3;

    // Navio 3 - Diagonal
    int navio3_c[3] = {0, 1, 2}; // Colunas A, B, C
    int navio3_r[3] = {5, 6, 6}; // Linhas 6, 7, 7
    for (int i = 0; i < 3; i++) tabuleiro[navio3_r[i]][navio3_c[i]] = 3;

    // Navio 4 - Diagonal invertida
    int navio4_c[3] = {6, 5, 4}; // Colunas G, F, E
    int navio4_r[3] = {0, 1, 2}; // Linhas 1, 2, 3
    for (int i = 0; i < 3; i++) tabuleiro[navio4_r[i]][navio4_c[i]] = 3;

    // Cone sobrepondo tudo
    int centroLinha = 3, centroColuna = 3, alturaCone = 3;
    for (int i = 0; i < alturaCone; i++) {
        int inicio = centroColuna - i;
        int fim = centroColuna + i;
        int linhaAtual = centroLinha + i;
        if (linhaAtual < 7) {
            for (int j = inicio; j <= fim; j++) {
                if (j >= 0 && j < 7) {
                    tabuleiro[linhaAtual][j] = 5;
                }
            }
        }
    }

    // Cruz sobrepondo tudo
    for (int i = 0; i < 7; i++) {
        tabuleiro[3][i] = 5; // linha central
        tabuleiro[i][3] = 5; // coluna central
    }

    // Octaedro sobrepondo tudo
    tabuleiro[2][3] = 5;
    tabuleiro[4][3] = 5;
    tabuleiro[3][2] = 5;
    tabuleiro[3][4] = 5;
    tabuleiro[2][2] = 5;
    tabuleiro[2][4] = 5;
    tabuleiro[4][2] = 5;
    tabuleiro[4][4] = 5;

    // Imprime o tabuleiro com números
    printf("   ");
    for (int x = 0; x < 7; x++) printf(" %s ", linha[x]);
    printf("\n");

    for (int y = 0; y < 7; y++) {
        printf("%2d ", y + 1);
        for (int x = 0; x < 7; x++) {
            printf("%2d ", tabuleiro[y][x]);
        }
        printf("\n");
    }

    return 0;
}