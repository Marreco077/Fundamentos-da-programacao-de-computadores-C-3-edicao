/*Faça um programa que leia um vetor com dez posições para números inteiros
e mostre somente os números positivos.*/

#include <stdio.h>

int main(void) {
    int vetor[10];

    // Leitura dos números inteiros
    printf("Digite dez numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%i", &vetor[i]);
    }

    // Impressão dos números positivos
    printf("Numeros positivos:\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] >= 0) {
            printf("%i\n", vetor[i]);
        }
    }

    return 0;
}