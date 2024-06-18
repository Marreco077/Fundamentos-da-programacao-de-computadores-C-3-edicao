/*. Elabore um programa que preencha uma matriz 6  3, calcule e mostre:
 ■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
 ■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna. */

#include <stdio.h>
#include <limits.h>

int main(void) {
    int matriz[6][3];
    int maior = INT_MIN;
    int menor = INT_MAX;
    int pos1[2], pos2[2]; // posicao

    printf("Digite dados para preencher uma matriz 6 x 3: \n");
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%i", &matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                pos1[0] = i;
                pos1[1] = j;
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                pos2[0] = i;
                pos2[1] = j;
            }
        }
    }

    printf("O maior elemento da matriz eh: %i e esta na posicao: [%i][%i]\n", maior, pos1[0], pos1[1]);
    printf("O menor elemento da matriz eh: %i e esta na posicao: [%i][%i]\n", menor, pos2[0], pos2[1]);
    
    return 0;
}