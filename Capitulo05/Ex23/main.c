/*Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido.
Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
150 | Fundamentos da programação de computadores
SALÁRIOS PERCENTAGEM DE AUMENTO
Até R$ 210,00 15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa.*/

#include <stdio.h>

int main(void) {
    int opcao, meses;
    float salario, decimo_terceiro;

    printf("Menu de opcoes: \n");
    while(opcao != 4) {
        printf("Opcao 1: Novo Salario\n");
        printf("Opcao 2: Ferias\n");
        printf("Opcao 3: Decimo terceiro\n");
        printf("Opcao 4: Sair\n");
        scanf("%i", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor do salario: \n");
                scanf("%f", &salario);
                if(salario < 210) {
                    salario *= 1.15;
                }
                else if(salario <= 600) {
                    salario *= 1.10;
                }   
                else {
                    salario *= 1.05;
                }
                printf("O novo salario eh de: %.1f\n", salario);
                break;
            case 2:
                printf("Digite o valor do salario: \n");
                scanf("%f", &salario);
                salario *= 1.33; // acrescido 1/3 do salario
                printf("O valor de suas ferias eh de: %.1f\n", salario);  
                break;
            case 3:
                printf("Digite o valor do salario: \n");
                scanf("%f", &salario);
                printf("Numero de meses trabalhados na empresa: \n");
                scanf("%i", &meses);
                if(meses <= 12 && meses > 0) {
                    decimo_terceiro *= meses / 12;
                }
                else {
                    printf("Invalido!\n");
                    continue;
                }
                break;
            case 4:
                return 4;
        }
    }

    return 0;
}