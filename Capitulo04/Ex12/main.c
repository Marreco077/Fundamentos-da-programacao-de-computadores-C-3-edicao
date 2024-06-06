// . Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
// mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

#include <stdlib.h>

int main(void) {
    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario<=300) {
        salario += 100;
    }
    else if(salario<600) {
        salario += 75;
    }
    else if(salario<=900) {
        salario += 50;
    }
    else {
        salario += 35;
    }

    salario *= 0.97;

    printf("O salario liquido eh de : %.1f", salario);
}