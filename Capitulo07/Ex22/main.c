/*Crie um programa que preencha uma matriz 6 X 10, some as colunas individualmente e acumule as somas na 7a
 linha da matriz. O programa deverá mostrar o resultado de cada coluna.*/

 #include <stdio.h>
 
 int main(void) {
     int matriz[6][10];
     int matriz_resultante[7][10];
     int soma[10] = {0};

     for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Complete o valor: [%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);

            soma[j] += matriz[i][j];
        }
     }

     for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 10; j++) {
            matriz_resultante[i][j] = matriz[i][j];

            if(i == 6) { // preencher a 7 linha da matriz
                matriz_resultante[i][j] = soma[j];
            }
        }
     }

     for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%i ", matriz_resultante[i][j]);
        }
        printf("\n");
     }
     
    return 0;
 }