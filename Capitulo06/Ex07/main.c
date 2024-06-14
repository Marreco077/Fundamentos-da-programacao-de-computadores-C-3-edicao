/*Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor*/

#include <stdio.h>

int main(void) {
    float vetor[10], soma_positivos;
    int  contador_negativo = 0;

    printf("Digite 10 valores: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        
        if(vetor[i] < 0) {
            contador_negativo++;
        }
        else {
            soma_positivos += vetor[i];
        } 
    } 

    printf("Total de numeros negativos foi de: %i\n", contador_negativo);
    printf("Soma dos positivos foi de: %f", soma_positivos);

    return 0;
}