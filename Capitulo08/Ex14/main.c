/*Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois
vetores A e B. O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B, os elementos menores ou iguais a zero*/

#include <stdio.h>

int recebe_vetor(int vetor[], int vetor_maior[], int vetor_menor[], int *aux1, int *aux2) {

    
    for(int i = 0; i < 30; i++) {
        if(vetor[i] > 0) {
            vetor_maior[*aux1] = vetor[i];
            aux1++;
        }
        else {
            vetor_menor[*aux2] = vetor[i];
            aux2++;
        }
    }
}

int main(void) {
    int vetor[30];
    int vetor_maior[30], vetor_menor[30], aux1, aux2; 

    for(int i = 0; i < 30; i++) {
        printf("Digite o valor: %i", i + 1);
        scanf("%i", &vetor[i]);
    }

    recebe_vetor(vetor, vetor_maior, vetor_menor, aux1, aux2);


    printf("Vetor maior que 0: ");

    for(int i = 0; i < aux1; i++) {
        printf("%i ", vetor_maior[i]);
    }

    for(int i = 0; i < aux2; i++) {
        printf("%i ", vetor_menor[i]);
    }

    
    return 0;
}