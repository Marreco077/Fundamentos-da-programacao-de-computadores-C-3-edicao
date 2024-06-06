#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int codigo, quantidade, produto, nota;
    float desconto, preco_final;

    printf("Digite o codigo do produto: [1 a 40]");
    scanf("%i", &codigo);
    printf("Digite a quantidade comprada do produto: ");
    scanf("%i", &quantidade);
    
    if(codigo < 1 || codigo > 40) {
        printf("Produto invalido\n");
        return 1;
    }
     
    if(codigo <= 10) {
        produto = 10;
    }
    else if(codigo <= 20) {
        produto = 15;
    }
    else if (codigo <=30) {
        produto = 20;
    }
    else {
        produto = 30;
    }
    
    nota = produto * quantidade;

    if(nota <= 250 ) {
        desconto = 5;
    }
    else if(nota <= 500) {
        desconto = 10;
    }
    else {
        desconto = 15;
    }

    preco_final = nota * (100 - desconto) / 100; // correção do cálculo do preço final

    printf("O preco unitario do produto comprado eh de: %d\n", produto);
    printf("O preco total da nota eh de: %d\n", nota);
    printf("O valor de desconto foi de %.1f%%\n", desconto);
    printf("O preco final do produto eh de: %.2f\n", preco_final);

    return 0;
}
