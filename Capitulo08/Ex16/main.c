/*Faça uma sub-rotina que receba um vetor X de 20 de números reais como parâmetro e retorne a soma
dos elementos de X. */

#include <stdio.h>

float somatorio(int vetor[]) {
    int soma = 0.0;

    for(int i = 0; i < 20; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main(void) {
    float vetor[20];

    for(int i = 0; i < 20; i++) {
        printf("Digite o valor %i: ", i+1);
        scanf("%f", &vetor[i]);
    }   

    printf("Resultado da soma eh: %.2f", somatorio(vetor));

    return 0;
}