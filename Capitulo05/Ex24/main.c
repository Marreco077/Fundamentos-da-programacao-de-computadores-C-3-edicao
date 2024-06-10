/*. Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
 ■ para encerrar a entrada de dados, deve ser digitado o valor zero;
 ■ para valores negativos, deve ser enviada uma mensagem;
 ■ os valores negativos ou iguais a zero não entrarão nos cálculos. */

#include <stdio.h>
#include <limits.h> // Para INT_MIN

int main(void) {
    int numero, maior = INT_MIN, menor = INT_MAX;

    while(1) {
        printf("Digite um numero: [0 encerra]\n");
        scanf("%i", &numero);
        
        if(numero == 0) {
            break;
        }
        else if(numero <= 0) {
            printf("Invalido\n");
            continue;
        }
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }
    }

    printf("O maior numero eh: %i\n", maior);
    printf("O menor numero eh: %i", menor);
    
    return 0;
}
