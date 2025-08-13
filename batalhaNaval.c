#include <stdio.h>

// Definições de tamanho do tabuleiro
#define LINHAS 10
#define COLUNAS 10

// Definição de valores padrão das habiliades
#define CON 1
#define OCT 2
#define CRU 3



void habilidadeCone(){
    
    for (int i = 0; i < CON; i++)
    {
        for (int j = 0; j < CON; j++)
        {
            if ()
            {
                /* code */
            }
            
        }
        
    }
    
}

void imprimeTabuleiro(int tabuleiro[LINHAS][COLUNAS]){

    //Inicializa o tabuleiro com "água" (0)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Imprime cabeçalho das colunas
    printf("   ");
    for (char letra = 'A'; letra < 'A' + COLUNAS; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS];
    imprimeTabuleiro(tabuleiro);
    

    return 0;
}