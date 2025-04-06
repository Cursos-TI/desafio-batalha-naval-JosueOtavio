#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0 (água)

    // Colocando "3" na diagonal principal (de cima para baixo)
    for (int i = 0; i < 10; i++) {
        tabuleiro[i][i] = 3;
    }

    // Colocando "3" na diagonal secundária (de cima para baixo)
    for (int i = 0; i < 10; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibir tabuleiro
    printf("\n TABULEIRO BATALHA NAVAL \n\n");

    // Imprimir cabeçalho (letras das colunas)
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    // Imprimir tabuleiro com os navios nas diagonais
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
} 
