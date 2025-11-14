#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    char *linha[10] = {"A","B","C","D","E","F","G","H","I","J"};
    int tabuleiro[10][10] = {0}; // matriz 10x10 inicializada com zeros

    //Navio 1 - Vertical 
    int navio1_c[3] = {3, 3, 3}; // Coluna D
    int navio1_r[3] = {2, 3, 4}; // Linhas 3, 4, 5

    /* Posiciona o Navio 1 no tabuleiro com valor 3 */
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_r[i]][navio1_c[i]] = 3;
    }

    // Navio 2 - Horizontal
    int navio2_c[3] = {5, 6, 7}; // Colunas F, G, H
    int navio2_r[3] = {5, 5, 5}; // Linhas 6, 6, 6

    /* Posiciona o Navio 2 no tabuleiro com valor 3 */
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio2_r[i]][navio2_c[i]] = 3;
    }

    // Navio 3 - Diagonal
    int navio3_c[3] = {0, 1, 2}; // Colunas A, B, C
    int navio3_r[3] = {7, 8, 9}; // Linhas 8, 9, 10

    /* Posiciona o Navio 3 no tabuleiro com valor 3 */
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio3_r[i]][navio3_c[i]] = 3;
    }

    // Navio 4 - Diagonal Invertida
    int navio4_c[3] = {9, 8, 7}; // Colunas J, I, H
    int navio4_r[3] = {0, 1, 2}; // Linhas 1, 2, 3

    /* Posiciona o Navio 4 no tabuleiro com valor 3 */
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio4_r[i]][navio4_c[i]] = 3;
    }

    /* Imprime o tabuleiro */
    printf("   ");
    for (int x = 0; x < 10; x++) printf(" %s ", linha[x]); // colunas A-J
    printf("\n");
    for (int y = 0; y < 10; y++) { // linhas 1-10
        printf("%2d ", y + 1);
        for (int x = 0; x < 10;  x++) {
            printf("%2d ", tabuleiro[y][x]);
        }
        printf("\n");
    }

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
