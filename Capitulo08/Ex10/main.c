/*Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) 
e determine o valor da sequência S, descrita a seguir: A quantidade de parcelas que compõe S é igual a N. */

#include <stdio.h>

void calcula_sequencia(int N) {
    float soma = 0.0;

    for (int i = 1; i <= N; i++) {
        soma += 1.0 / i;
    }

    printf("%.2f\n", soma);
}

int main(void) {
    int numero;

    scanf("%d", &numero);

    if (numero < 1) {
        printf("Numero invalido.\n");
        return -1;
    }

    calcula_sequencia(numero);

    return 0;
}
