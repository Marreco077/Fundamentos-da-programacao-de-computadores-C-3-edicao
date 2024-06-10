/*Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
TIPO DESCRIÇÃO RENDIMENTO MENSAL
1 Poupança 1,5%
2 Poupança plus 2%
3 Fundos de renda fixa 4%
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.*/

#include <stdio.h>

int main(void) {
    int codigo, tipo_investimento;
    float valor, total_investido = 0, total_juros = 0;

    while(1) {
        printf("Digite o código do cliente: [0 encerra]\n");
        scanf("%d", &codigo);

        if(codigo <= 0) {
            break;
        }
        
        printf("Digite o valor investido: \n");
        scanf("%f", &valor);
        total_investido += valor;

        printf("Digite o tipo de investimento (1 - Poupança, 2 - Poupança plus, 3 - Fundos de renda fixa): \n");
        scanf("%d", &tipo_investimento);

        switch(tipo_investimento) {
            case 1:
                valor *= 1.015; // Poupança rendimento mensal 1,5%
                total_juros += valor - total_investido;
                printf("O valor total foi de: %.2f\n", valor);
                printf("O valor de juros foi de: %.2f\n", valor - total_investido);
                break;
            case 2:
                valor *= 1.02; // Poupança plus rendimento mensal 2%
                total_juros += valor - total_investido;
                printf("O valor total foi de: %.2f\n", valor);
                printf("O valor de juros foi de: %.2f\n", valor - total_investido);
                break;
            case 3:
                valor *= 1.04; // Fundos de renda fixa rendimento mensal 4%
                total_juros += valor - total_investido;
                printf("O valor total foi de: %.2f\n", valor);
                printf("O valor de juros foi de: %.2f\n", valor - total_investido);
                break;
            default:
                printf("Tipo de investimento inválido!\n");
        }
    }

    printf("\nTotal investido: %.2f\n", total_investido);
    printf("Total de juros pagos: %.2f\n", total_juros);

    return 0;
}
