// Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if(idade>=18) {
        printf("De maior");
    }
    else {
        printf("De menor");
    }
    return 0;
}