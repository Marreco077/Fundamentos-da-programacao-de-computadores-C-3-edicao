/*. Elabore um programa que preencha uma matriz 5 X 5 e crie dois vetores de cinco posições cada um, que
contenham, respectivamente, as somas das linhas e das colunas da matriz. O programa deverá escrever
a matriz e os vetores criados.*/

#include <stdio.h>

int main(void) {
    int matriz[5][5];
    int vetor_linha[5] = {0};
    int vetor_coluna[5] = {0}; // inicializa com 0

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Preencha o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            vetor_linha[i] += matriz[i][j]; // linha = i
            vetor_coluna[j] += matriz[i][j]; // coluna = j
        }
    }

    printf("Matriz: \n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma das linhas: \n\n");

    for(int i = 0; i < 5; i++) {
        printf("Linha %i: %i\n", i+1, vetor_linha[i]);
    }

    printf("\n\nSoma das colunas: \n\n");

    for(int i = 0; i < 5; i++) {
        printf("Coluna %i: %i\n", i+1, vetor_coluna[i]);
    }

    return 0;
}