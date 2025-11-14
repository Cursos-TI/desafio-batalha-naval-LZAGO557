#include <stdio.h>

int main() {
    char *linha[10] = {"A","B","C","D","E","F","G","H","I","J"};
    int tabuleiro[10][10] = {0}; // tudo começa como água (0)

    // Navio 1 - Vertical
    int navio1_c[3] = {3, 3, 3}; // Coluna D
    int navio1_r[3] = {2, 3, 4}; // Linhas 3, 4, 5
    for (int i = 0; i < 3; i++) tabuleiro[navio1_r[i]][navio1_c[i]] = 3;

    // Navio 2 - Horizontal
    
int navio2_c[3] = {5, 6, 7}; // Colunas F, G, H
    int navio2_r[3] = {5, 5, 5}; // Linha 6
    for (int i = 0; i < 3; i++) tabuleiro[navio2_r[i]][navio2_c[i]] = 3;

    // Navio 3 - Diagonal
    int navio3_c[3] = {0, 1, 2}; // Colunas A, B, C
    int navio3_r[3] = {7, 8, 9}; // Linhas 8, 9, 10
    for (int i = 0; i < 3; i++) tabuleiro[navio3_r[i]][navio3_c[i]] = 3;

    // Navio 4 - Diagonal invertida
    
int navio4_c[3] = {9, 8, 7}; // Colunas J, I, H
    int navio4_r[3] = {0, 1, 2}; // Linhas 1, 2, 3
    for (int i = 0; i < 3; i++) tabuleiro[navio4_r[i]][navio4_c[i]] = 3;

    // Adiciona formato de cone (valor 5) sobrepondo tudo
    int centroLinha = 4; // linha central (índice 4)
    int centroColuna = 4; // coluna central (índice 4)
    int alturaCone = 3; // altura do cone

    for (int i = 0; i < alturaCone; i++) {
        
int inicio = centroColuna - i;
        int fim = centroColuna + i;
        int linhaAtual = centroLinha + i;
        if (linhaAtual < 10) {
            for (int j = inicio; j <= fim; j++) {
                if (j >= 0 && j < 10) {
                    tabuleiro[linhaAtual][j] = 1; // sobrepõe qualquer valor
                }
            }
        }
    }


    
// Imprime o tabuleiro
    printf("   ");
    for (int x = 0; x < 10; x++) printf(" %s ", linha[x]);
    printf("\n");
    for (int y = 0; y < 10; y++) {
        printf("%2d ", y + 1);
        for (int x = 0; x < 10; x++) {
            printf("%2d ", tabuleiro[y][x]);
        }
        printf("\n");
    }

return 0;
}


