/*Elabore um programa que preencha uma matriz 5 X 5 com números reais e encontre o maior valor da
matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor
encontrado e mostrar a matriz resultante após as multiplicações*/

#include <stdio.h>
#include <float.h>

int main(void) {
    float matriz[5][5];
    float maior = -FLT_MAX; // menor valor declarado
    float matriz_resultante[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Complete o valor: [%i][%i]\n", i, j);
            scanf("%f", &matriz[i][j]);

            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == j) {
                matriz_resultante[i][j] = matriz[i][j] * maior;
            }
            else {
                matriz_resultante[i][j] = matriz[i][j];
            }
        }
    }   


    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%.1f ", matriz_resultante[i][j]);
        }
        printf("\n");
    }
    return 0;
}