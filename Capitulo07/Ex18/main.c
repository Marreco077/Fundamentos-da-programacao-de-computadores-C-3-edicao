/*Crie um programa que preencha uma matriz 5 X 5 de números reais, 
calcule e mostre a soma dos elementos da diagonal secundária.*/

#include <stdio.h>

int main(void) {
    float matriz[5][5];
    float soma = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o valor: [%i][%i]\n", i, j);
            scanf("%f", &matriz[i][j]);

            if(i + j == 4) { // calcular diagonal secundaria é só pegar o valor da matriz q é 5x5 e dimunuir 1, sendo i + j = 4, ex [0][4], [1][3]...
                soma += matriz[i][j];
            }
        }
    }

    printf("O valor da soma da diagonal secundaria eh: %.1f", soma);

    return 0;
}