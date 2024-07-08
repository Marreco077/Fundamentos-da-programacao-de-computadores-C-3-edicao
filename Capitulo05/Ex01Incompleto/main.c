/*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D)
e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.*/
// não consegui fazer, o problema é imenso de grande e não achei solução na internet dele perfeito, 5 grupo com 4 valores, achei apenas 5 grupos com 1 valor por grupo
#include <stdio.h>

// Função para ordenar em ordem crescente usando Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, aux;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

// Função para imprimir os grupos
void printGroup(int grupo[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", grupo[i]);
    }
    printf("\n");
}

int main(void) {
    int grupo1[4], grupo2[4], grupo3[4], grupo4[4], grupo5[4];

    // Lendo os cinco grupos de quatro valores
    printf("Digite os cinco grupos de quatro valores (A, B, C, D):\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &grupo1[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &grupo2[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &grupo3[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &grupo4[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &grupo5[i]);
    }

    // Mostrando os grupos na ordem lida
    printf("Grupos na ordem lida:\n");
    printf("Grupo 1: ");
    printGroup(grupo1, 4);
    printf("Grupo 2: ");
    printGroup(grupo2, 4);
    printf("Grupo 3: ");
    printGroup(grupo3, 4);
    printf("Grupo 4: ");
    printGroup(grupo4, 4);
    printf("Grupo 5: ");
    printGroup(grupo5, 4);

    // Ordenando os grupos em ordem crescente usando Bubble Sort
    bubbleSort(grupo1, 4);
    bubbleSort(grupo2, 4);
    bubbleSort(grupo3, 4);
    bubbleSort(grupo4, 4);
    bubbleSort(grupo5, 4);

    // Mostrando os grupos em ordem crescente
    printf("\nGrupos em ordem crescente:\n");
    printf("Grupo 1: ");
    printGroup(grupo1, 4);
    printf("Grupo 2: ");
    printGroup(grupo2, 4);
    printf("Grupo 3: ");
    printGroup(grupo3, 4);
    printf("Grupo 4: ");
    printGroup(grupo4, 4);
    printf("Grupo 5: ");
    printGroup(grupo5, 4);

    // Mostrando os grupos em ordem decrescente
    printf("\nGrupos em ordem decrescente:\n");
    printf("Grupo 1: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", grupo1[i]);
    }
    printf("\nGrupo 2: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", grupo2[i]);
    }
    printf("\nGrupo 3: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", grupo3[i]);
    }
    printf("\nGrupo 4: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", grupo4[i]);
    }
    printf("\nGrupo 5: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", grupo5[i]);
    }
    printf("\n");

    return 0;
}
