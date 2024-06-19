/*Faça um programa que preencha uma matriz 8 X 6 de inteiros, calcule e mostre a média dos elementos
das linhas pares da matriz.*/

#include <stdio.h>

int main(void) {
    int matriz[8][6];   
    float media = 0;
    int soma = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 6; j++) {
            printf("Complete o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 8; i += 2) { // quis fazer uma graça, invés de colocar if pra ver se é par, coloquei somando i = i +2, que ai so pega as linhas pares
        for(int j = 0; j < 6; j++) {
            soma += matriz[i][j];
        }
    }
    
    media = (float)soma / 24.0; // 4 linhas pares, 0, 2, 4, 6 e 6 colunas, 6x4 24 elementos

    printf("A soma dos elementos das linhas pares de uma matriz eh: %.1f", media);

    return 0;
}