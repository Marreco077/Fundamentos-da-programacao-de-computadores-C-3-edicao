/*Elabore um programa que preencha uma matriz 12  4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:
 ■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
 ■ o total vendido em cada semana durante todo o ano;
 ■ o total vendido pela loja no ano.*/

 #include <stdio.h>
 
 int main(void) {
    int vendas[12][4];
    char mes[12][20] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int mes_vendas[12] = {0};
    int semana[4] = {0};
    int soma_total = 0;

     // Preenchendo a matriz com os valores das vendas
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite o valor das vendas para %s, semana %d: ", mes[i], j + 1);
            scanf("%d", &vendas[i][j]);

            mes_vendas[i] += vendas[i][j]; // Total de vendas no mês
            semana[j] += vendas[i][j];     // Total de vendas na semana
            soma_total += vendas[i][j];    // Total geral de vendas
        }
    }

    // Exibindo o total vendido em cada mês
    printf("\nTotal vendido em cada mês:\n");
    for(int i = 0; i < 12; i++) {
        printf("%s: %d\n", mes[i], mes_vendas[i]);
    }

    // Exibindo o total vendido em cada semana durante todo o ano
    printf("\nTotal vendido em cada semana durante todo o ano:\n");
    for(int j = 0; j < 4; j++) {
        printf("Semana %d: %d\n", j + 1, semana[j]);
    }

    // Exibindo o total vendido pela loja no ano
    printf("\nTotal vendido pela loja no ano: %d\n", soma_total);

    return 0;
}