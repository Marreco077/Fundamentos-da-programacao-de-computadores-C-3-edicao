/*Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados. */

#include <stdio.h>

int main(void) {
    int numero, quantidadePrimos = 0;

    printf("Digite dez numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numero);

        if (numero <= 1)
            continue;

        int ehPrimo = 1;
        for (int j = 2; j <= numero / 2; j++) {
            if (numero % j == 0) {
                ehPrimo = 0;
                break;
            }
        }

        if (ehPrimo)
            quantidadePrimos++;
    }

    printf("Quantidade de numeros primos: %d\n", quantidadePrimos);

    return 0;
}