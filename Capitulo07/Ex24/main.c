/*Elabore um programa que preencha uma matriz 4 X 5, calcule e mostre um vetor com cinco posições,
onde cada posição contém a soma dos elementos de cada coluna da matriz. O programa deverá mostrar
apenas os elementos do vetor maiores que dez. Se não existir nenhum elemento maior que dez, deverá
mostrar uma mensagem. */

#include <stdio.h>
#include <limits.h>

int main(void) {
    int matriz[4][5];
    int vetor[5] = {0};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Complete o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            vetor[j] += matriz[i][j];
        }
    }   

    printf("Vetor com a soma dos elementos de cada coluna: \n");

    for(int i = 0; i < 5; i++) {
        if(vetor[i] > 10) {
            printf("Soma dos elementos da coluna %i: %i\n", i+1, vetor[i]);
        }
        else {
            printf("Soma da coluna %i menor que 10\n", i+1);
        }
    }
    
    return 0;
}