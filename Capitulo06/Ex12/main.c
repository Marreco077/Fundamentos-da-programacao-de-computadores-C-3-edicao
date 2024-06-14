/*Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/

#include <stdio.h>

int main(void) {
    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite o numero %i: ", i+1);
        scanf("%i", &numeros[i]);
        soma += numeros[i];
    } 
    
    printf("Os numeros digitados foram: %i + %i + %i + %i + %i = %i", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4], soma);
    
    return 0;
}