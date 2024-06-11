/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
 ■ todos os números pares;
 ■ a quantidade de números pares;
 ■ todos os números ímpares;
 ■ a quantidade de números ímpares.*/

 #include <stdio.h>

 int main(void) {
    int vetor[6];
    int contador_par = 0, contador_impar = 0;

    printf("Digite seis valores: \n");

    for(int i = 0; i < 6; i++) {
        scanf("%i", &vetor[i]);
    }

    printf("Números pares: ");
    for(int i = 0; i < 6; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%i ", vetor[i]);
            contador_par++;
        }
    }
    printf("\nQuantidade de pares: %i\n", contador_par);

    printf("Números ímpares: ");
    for(int i = 0; i < 6; i++) {
        if(vetor[i] % 2 != 0) {
            printf("%i ", vetor[i]);
            contador_impar++;
        }
    }
    printf("\nQuantidade de ímpares: %i\n", contador_impar);

    return 0;
}
