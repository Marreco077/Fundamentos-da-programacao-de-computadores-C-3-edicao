/* Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int vetor[15];
    int primo[15];
    int index_primo = 0;
    int eh_primo;

    printf("Digite quinze numeros inteiros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 15; i++) {
        if (vetor[i] <= 1) {
            continue; // Números menores ou iguais a 1 não são primos
        }

        eh_primo = 1; // Assumimos que vetor[i] é primo inicialmente

        // Verifica se vetor[i] é divisível por algum número de 2 até sua raiz quadrada
        for (int j = 2; j <= sqrt(vetor[i]); j++) {
            if (vetor[i] % j == 0) {
                eh_primo = 0; // Se for divisível, não é primo
                break; // Sai do loop pois já sabemos que não é primo
            }
        }

        if (eh_primo) {
            primo[index_primo] = vetor[i];
            index_primo++;
        }
    }

    printf("Vetor resultante contendo os numeros primos:\n");
    for (int i = 0; i < index_primo; i++) {
        printf("%i\n", primo[i]);
    }

    return 0;
}
