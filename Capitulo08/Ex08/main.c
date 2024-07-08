/* Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial*/

#include <stdio.h>

int calcula_fatorial(int n) {
    int fatorial = 1;

    for(int i = n; i > 0; i--) {
        fatorial *= i;
    }

    printf("Fatorial = %i", fatorial);
}

int main(void) {
    int numero;
    printf("Digite um numero: \n");
    scanf("%i", &numero);

    calcula_fatorial(numero);

    return 0;
}