/* Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.*/

#include <stdio.h>

int main(void) {
    int idade, peso;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu peso: ");
    scanf("%i", &peso);

    if(idade < 20) {
        if(peso <= 60) {
            printf("Grupo 9");
        }
        else if(peso <= 90) {
            printf("Grupo 8");
        }
        else {
            printf("Grupo 7");
        }
    } // encerra idade até 20
    else if(idade <= 50) {
        if(peso <= 60) {
            printf("Grupo 6");
        }
        else if(peso <= 90) {
            printf("Grupo 5");
        }
        else {
            printf("Grupo 4");
        }
    } // encerra idade ate 50
    else {
        if(peso <= 60) {
            printf("Grupo 3");
        }
        else if(peso <= 90) {
            printf("Grupo 2");
        }
        else {
            printf("Grupo 1");
        }
    } // fim do if 50 +
    return 0;
}
