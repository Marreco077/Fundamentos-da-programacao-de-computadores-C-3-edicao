/*Faça um programa que preencha uma matriz 5 X 5 de números reais. A seguir, o programa deverá
multiplicar cada linha pelo elemento da diagonal principal daquela linha e mostrar a matriz após as
multiplicações.*/

#include <stdio.h>

int main(void) {
    float matriz[5][5];
    float diagonal[5] = {0};
    float matriz_resultante[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Complete o valor: [%i][%i]\n", i, j);
            scanf("%f", &matriz[i][j]);

            if(i == j) { // ver se é diagonal principal
                diagonal[i] = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz_resultante[i][j] = matriz[i][j] * diagonal[i]; // multiplicar cada linha pelo valor da diagonal
        }
    }

    printf("Matriz resultate: \n\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%.1f ", matriz_resultante[i][j]);
        }
        printf("\n");
    }
    return 0; 
}