/*Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)*/

#include <stdio.h>

int main(void) {
    int vetor[10];
    int vetor_modificado[10];
    int index_modificado = 0; // index para colocar no indice certo

    printf("Digite dez valores para o primeiro vetor\n");

    for(int i = 0; i < 10; i++) {
        scanf("%i", &vetor[i]);
    }   

    for(int i = 0; i < 10; i++) {
        if(vetor[i] > 0) {
            vetor_modificado[index_modificado] = vetor[i];
            index_modificado++;
        }
    }

    printf("Primeiro vetor: \n");

    for(int  i = 0; i < 10; i++) {
        printf("%i\n", vetor[i]);
    }

    printf("Vetor modificado: \n");

    for(int i = 0; i < index_modificado; i++) {
        printf("%i\n", vetor_modificado[i]);
    }
    return 0;
}