/* Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
 ■ os números múltiplos de 2;
 ■ os números múltiplos de 3;
 ■ os números múltiplos de 2 e de 3.*/

 #include <stdio.h>
 
 int main(void) {
    int vetor[7];

    printf("Digite sete numeros inteiros: \n");

    for(int i = 0; i < 7; i++) {
        scanf("%i", &vetor[i]);
    }
    
    printf("\nNumeros multiplos de 2: \n");

    for(int i = 0; i < 7; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%i ", vetor[i]);
        }
    }

    printf("\nNumeros multiplos de 3: \n");

    for(int i = 0; i < 7; i++) {
        if(vetor[i] % 3 == 0) {
            printf("%i ", vetor[i]);
        }
    }

    printf("\nNumeros multiplos de 2 e 3: \n");

    for(int i = 0; i < 7; i++) {
        if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0) {
            printf("%i ", vetor[i]);
        }
    }
    
    return 0;
 }