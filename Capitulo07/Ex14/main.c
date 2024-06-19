/* Faça um programa que preencha uma matriz 2 x 3, calcule e mostre a quantidade
 de elementos da matriz que não pertencem ao intervalo [5,15]. */

 #include <stdio.h>
 
 int main(void) {
    int matriz[2][3];
    int contador = 0; // conta quantidade fora de 5 a 15

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Preencha o valor da matriz: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            if(matriz[i][j] < 5 && matriz[i][j] > 15) {
                contador++;
            }
        }
    }

    printf("Numero de elementos que nao do intervalo 5 a 15: %i", contador);
    
    return 0;
 }