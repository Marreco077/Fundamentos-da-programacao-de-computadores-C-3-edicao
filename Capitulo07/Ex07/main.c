/*Elabore um programa que preencha uma matriz M de ordem 4 x 6 e uma segunda matriz N de ordem 6 x
4, calcule e imprima a soma das linhas de M com as colunas de N. */

#include <stdio.h>

int main(void) {
    int matriz[4][6];
    int matriz_dois[6][4];
    int soma_linha[4] = {0}; // começar com 0
    int soma_coluna[4] = {0};
    int soma = 0; // coloquei soma p ficar mais facil de printar

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            printf("Digite o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            soma_linha[i] += matriz[i][j]; // valor da linha i
        }
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz_dois[i][j]);

            soma_coluna[j] += matriz_dois[i][j]; // valor da coluana j
        }
    }

    for(int i = 0; i < 4; i++) {
        soma = soma_linha[i] + soma_coluna[i];

        printf("O resultado da %i linha eh de: %i\n", i+1, soma);
    }   
    return 0;
}