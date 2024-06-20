/*Crie um programa que:
 ■ receba o preço de dez produtos e armazene-os em um vetor;
 ■ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
uma matriz 5 X 10.
O programa deverá calcular e mostrar:
 ■ a quantidade de produtos estocados em cada um dos armazéns;
 ■ a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
 ■ o preço do produto que possui maior estoque em um único armazém;
 ■ o menor estoque armazenado;
 ■ o custo de cada armazém*/

#include <stdio.h>
#include <limits.h>

int main(void) {
    int preco[10];
    int matriz[5][10];
    int quantidade_estocada[5] = {0};
    int quantidade_total[10] = {0};
    int maior_estoque_armazem = 0;
    int custo_armazem[5] = {0};
    int menor_estoque = INT_MAX;

    // Recebendo os preços dos produtos
    printf("Digite o preco dos produtos:\n");
    for(int i = 0; i < 10; i++) {
        printf("Produto %d: ", i+1);
        scanf("%d", &preco[i]);
    }

    // Recebendo a quantidade estocada em cada armazém
    for(int i = 0; i < 5; i++) {
        printf("\nArmazem %d:\n", i+1);
        for(int j = 0; j < 10; j++) {
            printf("Produto %d: ", j+1);
            scanf("%d", &matriz[i][j]);

            quantidade_estocada[i] += matriz[i][j]; // Calcula quantidade de produtos em cada armazém
            quantidade_total[j] += matriz[i][j];    // Calcula quantidade total de cada produto

            // Calcula o custo do armazém atual
            custo_armazem[i] += matriz[i][j] * preco[j];

            // Verifica o menor estoque global
            if(matriz[i][j] < menor_estoque) {
                menor_estoque = matriz[i][j];
            }

            // Encontra o maior estoque em um único armazém
            if(matriz[i][j] > matriz[i][maior_estoque_armazem]) {
                maior_estoque_armazem = j;
            }
        }
    }

    // Calcula o custo do maior estoque individual em um único armazém
    int custo_maior_estoque_individual = matriz[maior_estoque_armazem][maior_estoque_armazem] * preco[maior_estoque_armazem];

    // Imprime os resultados
    printf("\nQuantidade de produtos estocados em cada armazem:\n");
    for(int i = 0; i < 5; i++) {
        printf("Armazem %d: %d produtos\n", i+1, quantidade_estocada[i]);
    }

    printf("\nQuantidade de cada um dos produtos estocados, em todos os armazens juntos:\n");
    for(int j = 0; j < 10; j++) {
        printf("Produto %d: %d unidades\n", j+1, quantidade_total[j]);
    }

    printf("\nPreco do produto que possui maior estoque em um unico armazem: R$ %d (Produto %d)\n", custo_maior_estoque_individual, maior_estoque_armazem + 1);

    printf("\nMenor estoque armazenado: %d unidades\n", menor_estoque);

    printf("\nCusto de cada armazem:\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Armazem %d: R$ %d\n", i+1, custo_armazem[i]);
    }

    return 0;
}
