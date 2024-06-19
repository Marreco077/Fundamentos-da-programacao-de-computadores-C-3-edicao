/*Faça um programa que preencha uma matriz 3 x 3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz*/

#include <stdio.h>

int main(void) {
    float matriz[3][3];
    float matriz_resultante[3][3];
    float numero;

    printf("Digite o numero que vai multiplicar cada elemento da matriz: \n");
    scanf("%f", &numero);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor [%i][%i] :\n", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz_resultante[i][j] = matriz[i][j] * numero; // calcular matriz resultante

            printf("%.1f ", matriz_resultante[i][j]); 
        }
        printf("\n"); // deixar em formato de matriz para facil visualizacao
    }
    return 0;
}