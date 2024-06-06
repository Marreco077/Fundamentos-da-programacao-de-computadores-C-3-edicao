// Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
// receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.


#include <stdio.h>

int main(void) {
    float preco;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    if(preco<=30) {
        preco *= 1;
    }
    else if(preco<=100) {
        preco *= 0.90;
    }
    else {
        preco *= 0.85;
    }

    printf("O valor final do produto eh: %.1f", preco);
    return 0;
}