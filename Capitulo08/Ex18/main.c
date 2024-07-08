/*Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.*/

#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(int numero) {
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // não é primo
        }
    }
    return 1; // é primo
}

int main(void) {
    int contador = 0;
    int numero = 101;

    printf("Os tres primeiros numeros primos acima de 100 sao: \n");
    while (contador < 3) {
        if (eh_primo(numero)) {
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }

    return 0;
}