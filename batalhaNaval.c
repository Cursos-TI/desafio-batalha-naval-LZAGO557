#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    char *linha[10] = {"A","B","C","D","E","F","G","H","I","J"};
    int tabuleiro[10][10] = {0}; // matriz 10x10 inicializada com zeros

    /* Escolhi as coordenadas do Navio 1: 4C, 4D, 4E (formato número+letra)
       Isso corresponde a coluna = 4 (1-based) e linhas C,D,E. */
    int navio1_c[3] = {3, 3, 3}; /* colunas 0-based (4 -> index 3) */
    int navio1_r[3] = {2, 3, 4}; /* linhas 0-based (C=2, D=3, E=4) */

    /* Posiciona o navio no tabuleiro com valor 3 */
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_r[i]][navio1_c[i]] = 3;
    }

    /* Imprime coordenadas do navio 1 no formato número+letra (ex: 4C) */
    printf("Navio 1 coordenadas: ");
    for (int i = 0; i < 3; i++) {
        int num = navio1_c[i] + 1;       /* 1-based */
        char letra = 'A' + navio1_r[i]; /* letra da linha */
        printf("%d%c ", num, letra);
    }
    printf("\n\n");

    /* Imprime o tabuleiro: cabeçalho de colunas e linhas A..J à esquerda */
    printf("   ");
    for (int x = 0; x < 10; x++) printf(" %s ", linha[x]);
    printf("\n");
    for (int y = 0; y < 10; y++) {
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
