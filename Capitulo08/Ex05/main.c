/*Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo*/

#include <stdio.h>

int verifica(int n) {
    if(n >= 0) {
        return 1;
    }
    else {
        return -1;
    }
}

int main(void) {
    int numero;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    if(verifica(numero) == 1) {
        printf("Positivo");
    }
    else {
        printf("Negativo");
    }

    return 0;
}