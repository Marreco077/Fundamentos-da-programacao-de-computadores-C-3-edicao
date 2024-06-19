/* Crie um programa que preencha uma matriz 12 X 13 e divida todos os elementos de cada linha pelo
maior elemento em módulo daquela linha. O programa deverá escrever a matriz lida e a modificada.*/

#include <stdio.h>


int main(void) {
    float matriz[12][13];
    float matriz_modificada[12][13];
    float vetor[12];

    for(int i = 0; i < 12; i++) { // inicializa com 0
        vetor[i] = 0.0;
    }


    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 13; j++) {
            printf("Digite o valor: [%i][%i]\n", i, j);
            scanf("%f", &matriz[i][j]);

            if(matriz[i][j] >= vetor[i]) {
                vetor[i] = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 13; j++) {
            matriz_modificada[i][j] = matriz[i][j] / vetor[i];

            printf("%.2f ", matriz_modificada[i][j]);
        }
        printf("\n");
    }
    return 0;
}