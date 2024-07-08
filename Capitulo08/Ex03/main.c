/*Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.*/

#include <stdio.h>

int divisao(int n1, int n2) {
    if(n1 % n2 == 0) {
        return 0;
    }
    else {
        for(int i = n2 + 1; i <= n1/2; i++) {
            if(n1 % i == 0) {
                return i;
            }
        }
    }

    return -1; // caso  n seja divisivel
}

int main(void) {
    int num1, num2;   

    printf("Digite dois numeros: \n");
    scanf("%i%i", &num1, &num2);
    
    printf("O resultado eh: %i\n", divisao(num1, num2));
    
    return 0;
}