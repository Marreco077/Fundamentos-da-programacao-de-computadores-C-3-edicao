// O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
// seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.


#include <stdio.h>

int main(void) {
    float custo;

    printf("Digite o custo de fabrica do carro: \n");
    scanf("%f", &custo);

    if(custo<=12000)
    {
        custo = custo * 1.05;
    }
    else if(custo<=25000)
    {
        custo = custo * 1.10 * 1.15;
    }
    else
    {
        custo = custo * 1.15 * 1.20;
    }
    
    printf("O custo final eh: %.1f", custo);

    return 0;
}