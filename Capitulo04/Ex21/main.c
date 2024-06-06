/* Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir. */

#include <stdio.h>

int main(void) {
    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%i", &codigo);

    switch(codigo) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
        default:
            if(codigo >= 10 && codigo <= 20) {
                printf("Centro-Oeste\n");
            }
            else if(codigo >= 21 && codigo <= 30) {
                printf("Nordeste\n");
            }
            else {
                printf("Codigo de origem invalido\n");
            }
     }

    return 0;
}
