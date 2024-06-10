/* Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
 ■ o lucro de cada ação comercializada;
 ■ a quantidade de ações com lucro superior a R$ 1.000,00;
 ■ a quantidade de ações com lucro inferior a R$ 200,00;
 ■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’.*/

#include <stdio.h>

int main(void) {
    char acao;
    float compra, venda, lucro = 0, lucro_total = 0;
    int contador_mil = 0, contador_pobre = 0;

    while(acao != 'F') {
        printf("Digite a letra da acao: [F finaliza]\n");
        scanf(" %c", &acao);
        
        if(acao == 'F') {
            break;
        }

        printf("Digite o valor de compra: \n");
        scanf("%f", &compra);
        printf("Digite o valor da venda: \n");
        scanf("%f", &venda);
        lucro = venda - compra;
        lucro_total += lucro;
        
        if(compra > 1000) {
            contador_mil++;
        }
        if(compra < 200) {
            contador_pobre++;
        }
        
        printf("Lucro da acao: %.1f\n", lucro);
    }

        printf("Lucro superior a mil: %i\n", contador_mil);
        printf("Lucro inferior a 200: %i\n", contador_pobre);
        printf("Lucro total da empresa: %.1f\n", lucro_total);

    
    return 0;
}