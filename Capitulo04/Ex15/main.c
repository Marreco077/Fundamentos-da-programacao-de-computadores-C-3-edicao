#include <stdio.h>

int main(void) {
    float valor;
    int opcao;

    printf("Digite o valor do aporte: ");
    scanf("%f", &valor);
    printf("Digite 1 para Poupanca e 2 para fundos de renda fixa:\n");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1:
            valor *= 1.03;
            break;
        case 2:
            valor *= 1.04;
            break;
        default:
            printf("Invalido");
            return 1;
    }
        
    printf("Valor final eh: %.1f", valor);
    return 0;
}