/*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:
 ■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
 ■ calcule e mostre a porcentagem de audiência de cada canal.
 Para encerrar a entrada de dados, digite o número do canal ZERO.*/

 #include <stdio.h>

int main(void) {
    int canal = -1;  // Inicializa canal com um valor que não interrompe o loop
    int pessoas, contador4 = 0, contador5 = 0, contador7 = 0, contador12 = 0, contador_total = 0;

    printf("Pesquisa de audiencia, pressione 0 para sair\n");

    while (canal != 0) {
        printf("Digite o numero do canal [4 5 7 12]: \n");
        scanf("%i", &canal);

        if (canal == 0) {
            break;  // Sai do loop se canal for 0
        }

        printf("Digite o numero de pessoas na casa: \n");
        scanf("%i", &pessoas);

        contador_total += pessoas;

        switch (canal) {
            case 4:
                contador4 += pessoas;
                break;
            case 5:
                contador5 += pessoas;
                break;
            case 7:
                contador7 += pessoas;
                break;
            case 12:
                contador12 += pessoas;
                break;
            default:
                printf("Canal invalido!\n");
        }
    }

    if (contador_total > 0) {
        float porcentagem_audiencia4 = (contador4 / (float)contador_total) * 100.0;
        float porcentagem_audiencia5 = (contador5 / (float)contador_total) * 100.0;
        float porcentagem_audiencia7 = (contador7 / (float)contador_total) * 100.0;
        float porcentagem_audiencia12 = (contador12 / (float)contador_total) * 100.0;

        printf("Porcentagem de audiencia canal 4: %.1f%%\n", porcentagem_audiencia4);
        printf("Porcentagem de audiencia canal 5: %.1f%%\n", porcentagem_audiencia5);
        printf("Porcentagem de audiencia canal 7: %.1f%%\n", porcentagem_audiencia7);
        printf("Porcentagem de audiencia canal 12: %.1f%%\n", porcentagem_audiencia12);
    } else {
        printf("Nenhuma casa foi pesquisada.\n");
    }

    return 0;
}