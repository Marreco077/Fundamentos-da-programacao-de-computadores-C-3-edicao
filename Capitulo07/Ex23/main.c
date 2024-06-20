/*Faça um programa que preencha uma matriz 3 X 4, calcule e mostre:
 ■ a quantidade de elementos pares;
 ■ a soma dos elementos ímpares;
 ■ a média de todos os elementos. */

 #include <stdio.h>
 
 int main(void) {
    int matriz[3][4];
    int contador_pares = 0;
    int soma_impares = 0;
    int soma_total = 0;
    float media = 0.0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Complete: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            soma_total += matriz[i][j];

            if(matriz[i][j] % 2 == 0) {
                contador_pares++;
            }
            else {
                soma_impares += matriz[i][j];
            }
        }
    }

    media = (float)soma_total / 12.0;

    printf("Quantidade de elementos pares: %i\n", contador_pares);
    printf("Soma dos elementos impares: %i\n", soma_impares);
    printf("Media de todos os elementos: %.1f", media);
     
    return 0;
 }