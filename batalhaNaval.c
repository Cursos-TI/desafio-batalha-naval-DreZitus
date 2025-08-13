#include <stdio.h>

// Definições de tamanho do tabuleiro
#define LINHAS 10
#define COLUNAS 10

// Matriz do tabuleiro
int tabuleiro[LINHAS][COLUNAS];

int main() {
    // 1. Inicializa o tabuleiro com "água" (0)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posiciona navio horizontal de tamanho 3 (valor 3 no tabuleiro)
    int linha_navio_h = 2;          // Linha 3 (índice 2)
    int col_inicio_navio_h = 3;     // Coluna D (índice 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_navio_h][col_inicio_navio_h + i] = 3;
    }

    // 3. Posiciona navio vertical de tamanho 3 (valor 3 no tabuleiro)
    int linha_inicio_navio_v = 4;   // Linha 5 (índice 4)
    int col_navio_v = 1;            // Coluna B (índice 1)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicio_navio_v + i][col_navio_v] = 3;
    }

    // 3.a Navio diagonal principal (tamanho 3): (i+k, j+k)
    int linhaDiagonal1 = 0;  // linha inicial
    int colunaDiagonal1 = 0;  // coluna inicial
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3; // (0,0),(1,1),(2,2)
    }

    // 3.b Navio diagonal secundária (tamanho 3): (i+k, j-k)
    int linhaDiagonal2 = 0;  // linha inicial
    int colunaDiagonal2 = 9;  // coluna inicial (extremo direito)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = 3; // (0,9),(1,8),(2,7)
    }

    // 4. Imprime cabeçalho das colunas
    printf("   ");
    for (char letra = 'A'; letra < 'A' + COLUNAS; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // 5. Imprime o tabuleiro
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}