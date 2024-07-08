/*Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.*/

#include <stdio.h>

int soma_divsor(int n) {
    int divisores = 0;
        
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
        divisores += i;
        }
    }
    return divisores;
}

int main(void) {
    int numero;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    printf("O resultado eh: %i", soma_divsor(numero));

    return 0;
}