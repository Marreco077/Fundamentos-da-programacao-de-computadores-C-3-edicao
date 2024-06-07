/*Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
 ■ a média das idades das dez pessoas;
 ■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
 ■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m*/

#include <stdio.h>

int main(void) {
    int idade, peso, contador_gordo = 0, contador_idade_alto = 0, contador_alto = 0;
    float altura, porcentagem_alto, media_idade;

    for(int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %i:\n", i);
        scanf("%i", &idade);
        printf("Digite o peso da pessoa %i:\n", i);
        scanf("%i", &peso);
        printf("Digite a altura da pessoa %i:\n", i);
        scanf("%f", &altura);

        if(peso>90 && altura<1.5) {
            contador_gordo++;
        }
        if(idade>= 10 && idade<= 30 && altura > 1.90) {
            contador_idade_alto++;
        }
        if(altura > 1.90) {
            contador_alto++;
        }

        media_idade += idade;
    }
    
    if(contador_alto != 0) {
        porcentagem_alto = (contador_idade_alto * 100.0) / contador_alto;
    }
    
    media_idade /= 10;

    printf("A media das idades eh de: %.1f\n", media_idade);
    printf("A quantidade de pessoas com peso maior que 90kg e altura menor que 1.50 eh: %i\n", contador_gordo);
    printf("A porcentagem de pessoas entre 10 a 30 entre as que medem mais de 1.90 eh: %.1f", porcentagem_alto);

    return 0;
}