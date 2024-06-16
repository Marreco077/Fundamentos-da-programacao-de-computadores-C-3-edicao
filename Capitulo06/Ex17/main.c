/*Faça um programa que preencha dois vetores de dez posições cada, determine e 
mostre um terceiro contendo os elementos dos dois vetores anteriores ordenados 
de maneira decrescente.*/

#include <stdio.h>

void bubbleSortDecrescente(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int vetor[10];
    int vetor_dois[10];
    int vetor_comb[20];

    // Leitura do primeiro vetor
    printf("Digite dez numeros para o primeiro vetor: \n");
    for(int i = 0; i < 10; i++) {
        scanf("%i", &vetor[i]);
    }

    // Leitura do segundo vetor
    printf("Digite dez numeros para o segundo vetor: \n");
    for(int i = 0; i < 10; i++) {
        scanf("%i", &vetor_dois[i]);
    }

    // Combinação dos vetores
    for(int i = 0; i < 10; i++) {
        vetor_comb[i] = vetor[i];
        vetor_comb[i+10] = vetor_dois[i];
    }

    // Ordenação do vetor combinado em ordem decrescente
    bubbleSortDecrescente(vetor_comb, 20);

    // Exibição do vetor ordenado
    printf("Vetor combinado ordenado de maneira decrescente:\n");
    for(int i = 0; i < 20; i++) {
        printf("%i\n", vetor_comb[i]);
    }

    return 0;
}
