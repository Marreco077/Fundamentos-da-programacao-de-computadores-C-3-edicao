/*Faça um programa que preencha uma matriz 3  5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20. */

#include <stdio.h>

int main(void) {
    int matriz [3][5], contador = 0;

    printf("Digite 15 numeros para a matriz: \n");
    
    for(int i = 0; i <3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Valor da matriz [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
            if(matriz [i][j] >= 15 && matriz [i][j] <= 20)  {
                contador++;
            }
        }
    }

    printf("Total de numeros entre 15 e 20 da matriz: %i\n", contador);

    return 0;
}