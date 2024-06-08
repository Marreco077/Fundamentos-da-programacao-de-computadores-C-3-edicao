/* Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F)
e salário. Faça um programa que calcule e mostre:
 ■ a média dos salários do grupo;
 ■ a maior e a menor idade do grupo;
 ■ a quantidade de mulheres com salário até R$ 200,00;
 ■ a idade e o sexo da pessoa que possui o menor salário.
Finalize a entrada de dados ao ser digitada uma idade negativa.*/

#include <stdio.h>

int main(void) {
    int idade, grupo = 0, idade_menor = 99999, idade_maior = 0, mulher_pobre = 0, idade_pobre;
    float salario, salario_total = 0, salario_pobre = 99999;
    char sexo, sexo_pobre;

    while(1) {
        printf("Digite a idade (idade negativa para parar): \n");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite o sexo: [M/F]\n");
        scanf(" %c", &sexo);

        printf("Digite o salario: \n");
        scanf("%f", &salario);

        grupo++;
        salario_total += salario;

        if (idade > idade_maior) {
            idade_maior = idade;
        }

        if (idade < idade_menor) {
            idade_menor = idade;
        }

        if (salario <= 200 && sexo == 'F') {
            mulher_pobre++;
        }

        if (salario < salario_pobre) {
            salario_pobre = salario;
            sexo_pobre = sexo;
            idade_pobre = idade;
        }
    }

    if (grupo > 0) {
        float salario_media = salario_total / grupo;

        printf("A média do salário é de: %.2f\n", salario_media);
        printf("A maior idade do grupo é: %d, e a menor idade é: %d\n", idade_maior, idade_menor);
        printf("A quantidade de mulheres com salário até R$ 200,00 é: %d\n", mulher_pobre);
        printf("A idade da pessoa com o menor salário é: %d e o sexo dela é: %c\n", idade_pobre, sexo_pobre);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}