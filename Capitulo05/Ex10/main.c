/*. Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.*/

#include <stdio.h>

int main(void) {
    int numero, soma_par = 0, soma_primo = 0;
    int divisores;

    for(int i = 1; i <= 10; i++) {
        printf("Digite o %io numero: ", i);
        scanf("%i", &numero);
        divisores = 0;

        if(numero % 2 == 0) {
            soma_par += numero;
        }

        if(numero <= 1)
            return 0;

        for (int j = 1; j <= numero; j++) {
            if (numero % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            soma_primo += numero;
        }
    }

    printf("A soma dos numeros pares eh: %i\n", soma_par);
    printf("A soma dos numeros primos eh: %i\n", soma_primo);

    return 0;
}