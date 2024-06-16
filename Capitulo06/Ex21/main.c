#include <stdio.h>

int main(void) {
    int vetor[10];
    int vetor_modificado[10];

    // Leitura dos números inteiros
    printf("Digite dez numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%i", &vetor[i]);
    }

    // Criação do segundo vetor substituindo valores nulos por 1
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == 0) {
            vetor_modificado[i] = 1;
        } else {
            vetor_modificado[i] = vetor[i];
        }
    }

    // Mostrando os dois vetores
    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%i ", vetor[i]);
    }
    printf("\n");

    printf("Vetor modificado (valores nulos substituidos por 1):\n");
    for (int i = 0; i < 10; i++) {
        printf("%i ", vetor_modificado[i]);
    }
    printf("\n");

    return 0;
}