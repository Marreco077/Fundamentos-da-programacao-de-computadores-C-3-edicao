/*Faça um programa que preencha uma matriz 20 x 10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante. */

#include <stdio.h>

int main(void) {
    int matriz[20][10];
    int vetor[10] = {0};
    int index = 0;

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Digite o elemento da matriz [%i][%i] \n", i, j);
            scanf("%i", matriz[i][j]);
            vetor[index] = matriz[i][j];
            index++;
        }
    }

    
    return 0;
}