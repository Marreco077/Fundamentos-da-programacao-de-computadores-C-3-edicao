/*Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
parâmetros. */

#include <stdio.h>

int mdc(int n1, int n2) {
    float maximo = 1;

    for(int i = 1; i <= n1 && i <= n2; i++) { // usar o for desse jeito para parar no menor numero, exemplo 10 e 20 ou 20 e 10
        if(n1 % i == 0 && n2 % i == 0) {
            maximo = i;
        }
    }
    return maximo;
}

int main(void) {
    float num1, num2;

    printf("Digite o numero 1 e numero 2: \n");
    scanf("%f%f", &num1, &num2);

    printf("O maximo divisor comum dos dois numeros eh: %i", mdc(num1, num2));

    return 0;
}