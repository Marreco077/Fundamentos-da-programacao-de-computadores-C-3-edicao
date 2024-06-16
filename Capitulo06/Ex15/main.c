/*Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito.*/

#include <stdio.h>

int main(void) {
    char clientes[8][30];
    int dvd[8];
    int contador_gratis[8] = {0};

    for(int i = 0; i < 8; i++) {
        printf("Digite o nome do %i cliente: \n", i+1);
        scanf("%s", clientes[i]);
        printf("Digite quantos dvds em 2011 o cliente %s alugou: \n", clientes[i]);
        scanf("%i", &dvd[i]);
    }

    for(int i = 0; i < 8; i++) {
        contador_gratis[i] = dvd[i] / 10;
    }

    for(int i = 0; i < 8; i++) {
        printf("Cliente: %s\n", clientes[i]);
        printf("Locacoes totais: %i\n", dvd[i]);
        printf("Locacoes gratis: %i\n", contador_gratis[i]);
    }
    return 0;
}