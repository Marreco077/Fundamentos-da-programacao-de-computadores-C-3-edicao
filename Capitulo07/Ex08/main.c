/*Crie um programa que preencha duas matrizes 3 x 8 com números inteiros, calcule e mostre:
 ■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 x 8;
 ■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 x 8*/

#include <stdio.h>

int main(void) {
    int matriz[3][8];
    int matriz_dois[3][8];
    int matriz_soma[3][8] = {0};
    int matriz_menos[3][8] = {0};

    // Preencher a primeira matriz
    printf("Preencha a primeira matriz:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 8; j++) {
            printf("Preencha o valor [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    // Preencher a segunda matriz
    printf("\nPreencha a segunda matriz:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 8; j++) {
            printf("Preencha o valor [%i][%i]: ", i, j);
            scanf("%i", &matriz_dois[i][j]);
        }
    }

    // Calcular a soma das matrizes
    printf("\nMatriz soma:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 8; j++) {
            matriz_soma[i][j] = matriz[i][j] + matriz_dois[i][j];
            printf("%2i ", matriz_soma[i][j]); 
        }
        printf("\n");
    }

    // Calcular a diferença das matrizes
    printf("\nMatriz diferenca:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 8; j++) {
            matriz_menos[i][j] = matriz[i][j] - matriz_dois[i][j];
            printf("%i ", matriz_menos[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
