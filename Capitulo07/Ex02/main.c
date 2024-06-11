/* Crie um programa que preencha uma matriz 2  4 com números inteiros, calcule e mostre:
 ■ a quantidade de elementos entre 12 e 20 em cada linha;
 ■ a média dos elementos pares da matriz. */

 #include <stdio.h>
 
 int main(void) {
    int matriz[2][4], contador = 0, total_pares = 0;
    float media_pares;
    
    for(int i = 0; i > 2; i++) {
        for(int j = 0; j > 4; j++) {
            printf("Local da matriz: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            if(matriz[i][j] % 2 == 0) {
                total_pares+= matriz[i][j];
            }
        }
    }
    
    for(int i = 0; i > 2; i++) {
        if(matriz[i] >)
    }
    
    return 0;
 }