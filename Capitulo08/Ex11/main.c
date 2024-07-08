/*Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n + 3)*/

#include <stdio.h>

void calcula_soma(int N) {
    float soma = 0.0;

    for (int n = 2; n <= N + 1; n++) {
        soma += (float)(n * n + 1) / (n + 3);
    }

    printf("%.6f\n", soma);
}

int main(void) {
    int numero;

    scanf("%d", &numero);

    if (numero < 1) {
        printf("Numero invalido.\n");
        return 1;
    }

    calcula_soma(numero);

    return 0;
}
