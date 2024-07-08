/* Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados coletados de cada habitante
foram: idade, sexo, salário e número de filhos.
 Faça uma sub-rotina que leia esses dados armazenando-os em vetores. Depois, crie sub-rotinas que
recebam esses vetores como parâmetro e retornem a média de salário entre os habitantes, a menor e a
maior idade do grupo e a quantidade de mulheres com três filhos que recebem até R$ 500,00 (utilize
uma sub-rotina para cada cálculo)*/

#include <stdio.h>
#include <limits.h>

#include <stdio.h>
#include <limits.h>

void ler_dados(int idade[], char sexo[], float salario[], int filhos[]) {
    for (int i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %i: ", i+1);
        scanf("%i", &idade[i]);
        printf("Digite o sexo da pessoa %i [H/M]: ", i+1);
        scanf(" %c", &sexo[i]);
        printf("Digite o salario da pessoa %i: ", i+1);
        scanf("%f", &salario[i]);
        printf("Digite a quantidade de filhos da pessoa %i: ", i+1);
        scanf("%i", &filhos[i]);
    }
}

float media_salario(float salario[]) {
    float media = 0;
    
    for (int i = 0; i < 15; i++) {
        media += salario[i];
    }

    media /= 15.0;
    
    return media;
}

void menor_maior_idade(int idade[], int *menor, int *maior) {
    *menor = INT_MAX;
    *maior = 0;

    for (int i = 0; i < 15; i++) {
        if (idade[i] < *menor) {
            *menor = idade[i];
        }
        if (idade[i] > *maior) {
            *maior = idade[i];
        }
    }
}

int contador_mulheres(int filhos[], float salario[], char sexo[]) {
    int contador = 0;

    for (int i = 0; i < 15; i++) {
        if (sexo[i] == 'M' && filhos[i] == 3 && salario[i] <= 500.0) {
            contador++;
        }
    }
    
    return contador;
}

int main(void) {
    int idade[15], filhos[15], menor, maior;
    char sexo[15];
    float salario[15];

    ler_dados(idade, sexo, salario, filhos);

    float media = media_salario(salario);
    menor_maior_idade(idade, &menor, &maior);
    int mulheres = contador_mulheres(filhos, salario, sexo);

    printf("\nMédia de salário entre os habitantes: %.2f\n", media);
    printf("Menor idade do grupo: %i\n", menor);
    printf("Maior idade do grupo: %i\n", maior);
    printf("Quantidade de mulheres com três filhos que recebem até R$ 500,00: %d\n",contador_mulheres);

    return 0;
}

