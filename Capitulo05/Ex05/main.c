/*Faça um programa que mostre as tabuadas dos números de 1 a 10. */

#include <stdio.h>

int main(void) {
    int numero;

    for(int i = 1; i <= 10; i++) {
        for(int j = 0; j <= 10; j++) {
            printf("%i * %i = %i\n", i, j, i*j);
        }
    }
    return 0;
}