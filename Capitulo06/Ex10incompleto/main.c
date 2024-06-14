#include <stdio.h>

// Função para verificar se um número é par
int ehPar(int num) {
    return num % 2 == 0;
}

// Função para contar os divisores de um número no segundo vetor
int contarDivisores(int num, int vetor2[], int tamanho2) {
    int count = 0;
    for (int i = 0; i < tamanho2; i++) {
        if (vetor2[i] != 0 && num % vetor2[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int vetor1[10];
    int vetor2[5];
    int resultado1[10];
    int resultado2[10];

    // Preenchendo o vetor1 com 10 números inteiros
    printf("Digite 10 números inteiros para preencher o vetor 1:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Preenchendo o vetor2 com 5 números inteiros
    printf("Digite 5 números inteiros para preencher o vetor 2:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Calculando o primeiro vetor resultante
    printf("Primeiro vetor resultante (soma de números pares do vetor1 com elementos do vetor2):\n");
    for (int i = 0; i < 10; i++) {
        if (ehPar(vetor1[i])) {
            resultado1[i] = 0;
            for (int j = 0; j < 5; j++) {
                resultado1[i] += vetor1[i] + vetor2[j];
            }
            printf("%d ", resultado1[i]);
        } else {
            resultado1[i] = vetor1[i];
            printf("%d ", resultado1[i]);
        }
    }
    printf("\n");

    // Calculando o segundo vetor resultante
    printf("Segundo vetor resultante (quantidade de divisores de números ímpares do vetor1 no vetor2):\n");
    for (int i = 0; i < 10; i++) {
        if (!ehPar(vetor1[i])) {
            resultado2[i] = contarDivisores(vetor1[i], vetor2, 5);
            printf("%d ", resultado2[i]);
        } else {
            resultado2[i] = 0; // Se for par, o resultado é 0 (por definição)
            printf("%d ", resultado2[i]);
        }
    }
    printf("\n");

    return 0;
}
