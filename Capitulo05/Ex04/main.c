/*Faça um programa que receba um número, calcule e mostre a tabuada desse número. */

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero para fazer sua tabuada: \n");
    scanf("%i", &numero);

    for(int i = 0; i <= 10; i++) {
        printf("%i * %i = %i\n", numero, i, numero*i);
    }
    return 0;
}