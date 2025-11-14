#include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 5;
    int tabuleiro[3][5] = {0};

    // Preenche a cruz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == linhas / 2 || j == colunas / 2) {
                tabuleiro[i][j] = 1;
            }
        }
    }

    // Imprime o tabuleiro
    
for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n Àgua %d\n", 15 - 7);  // Total de posições menos as posições ocupadas pela cruz
    printf("\n Navios %d\n", 7);  // Posições ocupadas pela cruz

    return 0;
}
