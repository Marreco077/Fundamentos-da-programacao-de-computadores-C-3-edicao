/*Crie um programa que preencha uma matriz 5 x 5 com números inteiros, calcule e mostre a soma:
 ■ dos elementos da linha 4;
 ■ dos elementos da coluna 2;
 ■ dos elementos da diagonal principal;
 ■ dos elementos da diagonal secundária;
 ■ de todos os elementos da matriz.*/

#include <stdio.h>

int main(void) {
    int matriz[5][5];
    int soma_linha = 0;
    int soma_coluna = 0;
    int diagonal_principal = 0;
    int diagonal_secundaria = 0;
    int soma_total = 0;

    // Preenche a matriz e calcula as somas
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o valor [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);

            soma_total += matriz[i][j];

            if(i == 4) {
                soma_linha += matriz[i][j];
            }
            if(j == 2) {
                soma_coluna += matriz[i][j];
            }
            if(i == j) { // jeito mais facil de calcular diagonal que eu sei, pega os valor 0 0/ 1 1/ 2 2...
                diagonal_principal += matriz[i][j]; 
            }
            if(i + j == 4) { // formula para calcular diagonal secundaria, pega o numero da matriz, exemplo 5x5 e subtrai 1, uma matriz 8x8 seria i + j = 7
                diagonal_secundaria += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos elementos da linha 4: %i\n", soma_linha);
    printf("Soma dos elementos da coluna 2: %i\n", soma_coluna);
    printf("Soma dos elementos da diagonal principal: %i\n", diagonal_principal);
    printf("Soma dos elementos da diagonal secundaria: %i\n", diagonal_secundaria);
    printf("Soma total de todos os elementos da matriz: %i\n", soma_total);

    return 0;
}
