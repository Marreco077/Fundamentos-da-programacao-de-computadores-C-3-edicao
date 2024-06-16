/*Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

#include <stdio.h>

int main(void) {
    int vetor[10];
    int vetor_dois[10];
    int vetor_resultado[10];

    printf("Digite dez numeros para o primeiro vetor: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%i", &vetor[i]);
    }

    printf("Digite mais dez numeros para o segundo vetor: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%i", &vetor_dois[i]);
    }

    for(int i = 0; i < 10; i++) {
        vetor_resultado[i] = vetor[i] * vetor_dois[i]; // fazer vetor resultatante de vetor[1] * vetor[1]...
    }

    for(int i = 0; i < 10; i++) {
        printf("%i * %i = %i\n", vetor[i], vetor_dois[i], vetor_resultado[i]);
    }   
    return 0;
}