/* Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos. 
Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão aumento.
Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.*/

#include <stdio.h>

int main(void) {
    char nomes[10][20]; // array armazena nomes
    int codigos[10];  // vetor armezena codigo
    float precos[10]; // vetor para precos
    float aumento_dez = 1.10, aumento_quinze = 1.15, aumento_vinte = 1.20; // aumento dos preços

    printf("Digite o nome de 10 produtos: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%s", nomes[i]); // armazenar nome string
    }

    printf("Digite o codigo dos 10 produtos: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%i", &codigos[i]);
    }   

    printf("Digite o preco de 10 produtos: \n");

    for(int i = 0; i < 10; i++) {
        scanf("%f", &precos[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(precos[i] > 1000 && codigos[i] % 2 == 0) { // teste para ver qual promoção será
            precos[i] *= aumento_vinte;
        }
        else if(codigos [i] % 2 == 0) {
            precos[i] *= aumento_quinze;
        }
        else if(precos [i] > 1000) {
            precos[i] *= aumento_dez;
        }
    }

    for(int i = 0; i < 10; i++) { 
        if(precos[i] > 1000 || codigos[i] % 2 == 0) { // colocar apenas produtos com aumento de preco
            printf("Nome do produto: %s\n", nomes[i]);
            printf("Codigo do produto: %i\n", codigos[i]);
            printf("Novo preco: %.1f\n\n", precos[i]);
        }
    }
    return 0;
}