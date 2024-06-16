/*Faça um programa que receba o nome de cinco produtos e seus respectivos precos. Calcule e mostre:
 ■ a quantidade de produtos com preco inferior a R$ 50,00;
 ■ o nome dos produtos com preco entre R$ 50,00 e R$ 100,00;
 ■ a media dos precos dos produtos com preco superior a R$ 100,00.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[5][30];
    char nome_medio[5][30] = {0};
    float preco[5];
    int contador_inferior = 0, contador_media = 0, contador_medio = 0;
    float soma_total = 0, media = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite o nome do produto %i:\n", i+1);
        scanf("%s", nome[i]);
        printf("Digite o preco do produto %s:\n", nome[i]);
        scanf("%f", &preco[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(preco[i] < 50) {
            contador_inferior++;
        } else if(preco[i] <= 100) {
            strcpy(nome_medio[contador_medio], nome[i]); // Copia o nome do produto para o vetor nome_medio
            contador_medio++;
        } else {
            soma_total += preco[i];
            contador_media++;
        }
    }

    if (contador_media > 0) {
        media = soma_total / contador_media;
    }

    printf("A quantidade de produtos com preco inferior a 50 eh: %i\n", contador_inferior);
    printf("A media dos precos dos produtos acima de 100 reais foi de: %.2f\n", media);

    if (contador_medio > 0) {
        printf("Produtos com preco entre 50 e 100 reais:\n");
        for(int i = 0; i < contador_medio; i++) {
            printf("Nome do %i produto: %s\n", i+1, nome_medio[i]);
        }
    } else {
        printf("Nao ha produtos com preco entre 50 e 100 reais.\n");
    }

    return 0;
}
