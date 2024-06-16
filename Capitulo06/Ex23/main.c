/*Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.*/

#include <stdio.h>

int main(void) {
    int vetorA[5];
    int vetorB[5];
    int resultados[5];

    // Leitura dos valores do vetor A
    printf("Digite cinco valores para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%i", &vetorA[i]);
    }

    // Leitura dos valores do vetor B
    printf("Digite cinco valores para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%i", &vetorB[i]);
    }

    // Realiza a subtração conforme especificado e armazena os resultados
    for (int i = 0; i < 5; i++) {
        resultados[i] = vetorA[i] - vetorB[4 - i];
    }

    // Impressão dos resultados
    printf("Resultados das subtracoes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subtracao %i: %i - %i = %i\n", i+1, vetorA[i], vetorB[4 - i], resultados[i]);
    }

    return 0;
}
