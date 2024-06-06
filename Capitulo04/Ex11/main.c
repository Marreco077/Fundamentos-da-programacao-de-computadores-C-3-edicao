// Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
// mostre o valor do aumento e o novo salário

#include <stdlib.h>

int main(void) {
    float salario, aumento;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario<=300) {
        aumento = salario * 0.15;
    }
    else if(salario<600) {
        aumento = salario * 0.10;
    }
    else if(salario<=900) {
        aumento = salario * 0.05;
    }
    else {
        aumento = 0;
    }

    salario = salario + aumento;
    
    printf("O aumento foi de %.1f", aumento);
    printf("O salario reajustado eh de %.1f", salario);

}