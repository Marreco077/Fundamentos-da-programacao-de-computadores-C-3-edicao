/* Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
10 X 10*/

#include <stdio.h>

int main(void) {
    int matriz[10][10];
    int diagonal[10] = {0};
    float media = 0.0;
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Complete o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);
 
            if(i == j) { // calculo diagonal principal 1 1 || 2 2|| 3 3..
                diagonal[i] = matriz[i][j];
            }
        }
    } 
    
// Cálculo da soma dos elementos da diagonal principal
    for(int i = 0; i < 10; i++) {
        soma += diagonal[i];
    }

    // Cálculo da média
    media = (float)soma / 10.0;

    printf("A media dos elementos da diagonal principal eh: %.1f\n", media);

    return 0;
}