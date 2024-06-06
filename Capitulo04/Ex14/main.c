// Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
// o novo salário.

#include <stdlib.h>

int main(void) {
    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario<=300) {
        salario *= 1.5;
    }
    else if(salario<=500) {
        salario *= 1.4;
    }
    else if(salario <=700) {
        salario *= 1.3;
    }
    else if(salario <=800) {
        salario *= 1.2;
    }
    else if(salario <=1000) {
        salario *= 1.1;
    }
    else {
        salario *= 1.05;
    }

    printf("Novo salario eh de: %.1f", salario);
}