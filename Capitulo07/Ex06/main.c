/*Faça um programa que preencha uma matriz 20 x 10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante. */


#include <stdio.h>

int main(void) {
    int matriz[20][10];
    int vetor[10] = {0};
    int resultado[20][10];

    // Preenchendo a matriz com números fornecidos pelo usuário
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Digite o elemento da matriz [%i][%i]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Somando cada uma das colunas e armazenando no vetor
    for(int j = 0; j < 10; j++) {
        for(int i = 0; i < 20; i++) {
            vetor[j] += matriz[i][j];
        }
    }

    // Multiplicando cada elemento da matriz pela soma da coluna correspondente
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++) {
            resultado[i][j] = matriz[i][j] * vetor[j];
        }
    }

    // Exibindo a matriz resultante
    printf("Matriz resultante:\n");
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
