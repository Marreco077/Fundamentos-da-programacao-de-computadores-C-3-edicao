/*Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram*/

#include <stdio.h>

int main(void) {
    int vetor [15];

    printf("Digite 15 valores: \n");
    for(int i = 0; i < 15; i++) {
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 15; i++) {
        if(vetor[i] == 30) {
            printf("Existe na posicao numero %i\n", i);
        }
    }
    return 0;
}