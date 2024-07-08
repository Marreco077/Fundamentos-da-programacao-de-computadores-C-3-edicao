/* Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados coletados de cada habitante
foram: idade, sexo, salário e número de filhos.
 Faça uma sub-rotina que leia esses dados armazenando-os em vetores. Depois, crie sub-rotinas que
recebam esses vetores como parâmetro e retornem a média de salário entre os habitantes, a menor e a
maior idade do grupo e a quantidade de mulheres com três filhos que recebem até R$ 500,00 (utilize
uma sub-rotina para cada cálculo)*/

#include <stdio.h>

float ler_dados() {
    int idade[15];
    char sexo[15];
    float salario[15];
    int filhos[15];

    for(int i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %i: \n", i+1);
        scanf("%i", &idade[i]);
        printf("Digite o sexo da pessoa %i: [H/M]\n", i+1);
        scanf(" %c", &sexo[i]);
        printf("Digite o salario da pessoa %i: \n", i+1);
        scanf("%f", &salario[i]);
        printf("Digite a quantidade de filhos da pessoa %i: \n", i+1);
        scanf("%i", &filhos[i]);
    }
}
int main(void) {
    
    return 0;
}