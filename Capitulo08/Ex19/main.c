/*.Faça uma sub-rotina que receba como parâmetro dois vetores de dez números inteiros, determine e mostre o vetor intersecção entre eles.*/

#include <stdio.h>

void interseccao(int vetor1[], int vetor2[], int vetor_junto[], int *aux) {
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(vetor1[i] == vetor2[j]) {
                vetor_junto[*aux] = vetor1[i];
                (*aux)++; // tem q colocar parentese por conta q em C o programa conta * como uma operacao
                break;
            }
        }
    }
}

int main(void) {
    int vetor1[10];
    int vetor2[10];
    int vetor_junto[10];
    int aux = 0;

    printf("Digite os elementos do vetor1:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do vetor2:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    interseccao(vetor1, vetor2, vetor_junto, &aux);

    printf("Elementos da intersecao: ");
    for (int i = 0; i < aux; i++) {
        printf("%d ", vetor_junto[i]);
    }
   

    return 0;
}