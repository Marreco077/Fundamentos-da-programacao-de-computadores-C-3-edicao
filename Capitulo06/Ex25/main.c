/*Faça um programa que leia um vetor com quinze posições para números inteiros. 
Depois da leitura, divida todos os seus elementos pelo maior valor do vetor. 
Mostre o vetor após os cálculos.*/

#include <stdio.h>
#include <limits.h>

int main(void) {
    int vetor[15];
    float maior = INT_MIN;
    float resultado;

    printf("Digite 15 numeros: \n");

    for(int i = 0; i < 15; i++) {
        scanf("%i", &vetor[i]);

        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

        // Divisão de todos os elementos pelo maior valor encontrado
    for(int i = 0; i < 15; i++) {
        float resultado = (float)vetor[i] / maior; // Divisão correta como float, tive q criar outra variavel para mostrar
        printf("%.2f\n", resultado); // Mostra o resultado como float com duas casas decimais
    }

    
    return 0;
}