/*Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares*/

#include <stdio.h>

int main(void) {
    int numeros[10];
    int pares[10] = {0};
    int impares[10] = {0};
    int index_par = 0;
    int index_impar = 0;

    printf("Digite dez numeros: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%i", &numeros[i]);

        if(numeros[i] % 2 == 0) { // verifica se é par
            pares[index_par++] = numeros[i];
        }
        else {
            impares[index_impar++] = numeros[i];
        }
    } 

    printf("Numeros pares: \n");

    for(int i = 0; i < index_par; i++) {
        printf("%i ", pares[i]);
    } 

    printf("\nNumeros impares: \n");

    for(int i = 0; i < index_impar; i++) {
        printf("%i ", impares[i]);
    } 

    return 0;
}