/*Elabore um programa que: preencha uma matriz 6 X 4; recalcule a matriz digitada, 
onde cada linha deverá ser multiplicada pelo maior elemento da linha em questão; 
mostre a matriz resultante.*/

//Tava cansado quando eu fiz e fiz com um monte de if else, mas podia colocar só um vetor muito mais facil, no ex 15 fiz com vetor

#include <stdio.h>
#include <limits.h>

int main(void) {
    int matriz[6][4];
    int matriz_resultante[6][4];
    int maior1 = INT_MIN; int maior2 = INT_MIN; int maior3 = INT_MIN;
    int maior4 = INT_MIN; int maior5 = INT_MIN; int maior6 = INT_MIN;

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite o valor [%i][%i]: \n", i, j);
            scanf("%i", &matriz[i][j]);

            if(i == 0 && matriz[i][j] >= maior1) {
                maior1 = matriz[i][j];
            }
            else if(i == 1 && matriz[i][j] >= maior1) {
                maior2 = matriz[i][j];
            }
            else if(i == 2 && matriz[i][j] >= maior1) {
                maior3 = matriz[i][j];
            }
            else if(i == 3 && matriz[i][j] >= maior1) {
                maior4 = matriz[i][j];
            }
            else if(i == 4 && matriz[i][j] >= maior1) {
                maior5 = matriz[i][j];
            }
            else if(i == 5 && matriz[i][j] >= maior1) {
                maior6 = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            if(i == 0) {
                matriz_resultante[i][j] = matriz[i][j] * maior1;
                printf("%i ", matriz_resultante[i][j]);
            }
            else if(i == 1) {
                matriz_resultante[i][j] = matriz[i][j] * maior2;
                printf("%i ", matriz_resultante[i][j]);
            }
            else if(i == 2) {
                matriz_resultante[i][j] = matriz[i][j] * maior3;
                printf("%i ", matriz_resultante[i][j]);
            }
            else if(i == 3) {
                matriz_resultante[i][j] = matriz[i][j] * maior4;
                printf("%i ", matriz_resultante[i][j]);
            }
            else if(i == 4) {
                matriz_resultante[i][j] = matriz[i][j] * maior5;
                printf("%i ", matriz_resultante[i][j]);
            }
            else if(i == 5) {
                matriz_resultante[i][j] = matriz[i][j] * maior6;
                printf("%i ", matriz_resultante[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}