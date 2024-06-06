//  Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.


#include <stdlib.h>

int main(void) {
    float produto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    if(produto<=50) {
        produto *= 1.05;
    }
    else if(produto<100) {
        produto *= 1.10;
    }
    else {
        produto *= 1.15;
    }

    printf("Valor atualizado do produto: %.1f\n", produto);
    printf("Classificacao: ");

    if(produto<=80) {
        printf("Barato");
    }
    else if(produto<=120) {
        printf("Normal");
    }
    else if(produto <=200) {
        printf("Caro");
    }
    else {
        printf("Muito caro");
    }

    return 0;
}