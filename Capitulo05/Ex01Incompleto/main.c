/*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D)
e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.*/

#include <stdio.h>

int main(void) {
    int grupo1, grupo2, grupo3, grupo4, grupo5;
    int valor = 0, valor1,valor2,valor3,valor4;
    int maior1,maior2,maior3,maior4,maior5;

    printf("Digite 4 valores: \n");

    for(int i=0; i<=4; i++) {
        scanf("%i", &valor);
        grupo1 += valor;
    }
    printf("Digite 4 valores: \n");

    for(int i=0; i<=4; i++) {
        scanf("%i", &valor);
        grupo2 += valor;
    }
    printf("Digite 4 valores: \n");

    for(int i=0; i<=4; i++) {
        scanf("%i", &valor);
        grupo3 += valor;
    }
    printf("Digite 4 valores: \n");

    for(int i=0; i<=4; i++) {
        scanf("%i", &valor);
        grupo4 += valor;
    }
    if(grupo1 >= grupo2 && grupo1 >= grupo3 && grupo1 >= grupo4 && grupo1>= grupo5) {
        maior1 = grupo1;
    }
    else if(grupo2 >= grupo1 && grupo2 >= grupo3 && grupo2 >= grupo4 && grupo2>= grupo5)

    return 0;
}