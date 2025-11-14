#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    char linha[3];
    int tabuleiro[5][5] = {0}; // matriz 10x10 inicializada com zeros

    //Navio 1 - Vertical 
    int navio1_c[3] = {3, 3, 3}; // Coluna D
    int navio1_r[3] = {2, 3, 4}; // Linhas 3, 4, 5

    /* Posiciona o Navio 1 no tabuleiro com valor 3 */
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_r[i]][navio1_c[i]] = 3;
    }
    
    /* Imprime o tabuleiro */
    for (int y = 0; y < 3; y++) { // linhas 1-10
        for (int x = 0; x < 5;  x++) {
            printf("%d ", tabuleiro[y][x]);
        }
        printf("\n");
    }


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
