/* Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a
quantidade de valores pares em X*/

#include <stdio.h>

int eh_par(int vetor[]) {
    int contador = 0;
    for(int i = 0; i < 15; i++) {
        if(vetor[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}

int main(void) {
    int vetor[15];
 
    for(int i = 0; i < 15; i++) {
        printf("Digite o valor %i: \n", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("Quantidade de pares: %i", eh_par(vetor));

    return 0;
}