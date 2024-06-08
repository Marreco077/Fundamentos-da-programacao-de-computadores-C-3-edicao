/* Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
 ■ o preço final para compra à vista tem desconto de 20%;
 ■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
 ■ os percentuais de acréscimo encontram-se na tabela a seguir.*/

 #include <stdio.h>
 
 int main(void) {
    float preco, preco_final, valor_parcela, vista;
    int parcelas, acrescimo = 3;

    printf("Digite o valor do carro: \n");
    scanf("%f", &preco);
    printf("Tabela de precos e acrescimos: \n");
    printf("-----------------------\n");
    for(int i = 6; i <= 60; i = i+6) {
        parcelas = i;
        valor_parcela = (preco / parcelas) * (acrescimo / 100.0 + 1);
        preco_final = valor_parcela * parcelas;
        acrescimo += 3;
        
        printf("Quantidade de parcelas = R$%i\n", parcelas);
        printf("Valor de cada parcela = R$%.1f\n", valor_parcela);
        printf("Preco final: R$%.1f\n\n", preco_final);
    }
    vista = preco * 0.80; // preco a vista
    printf("Preco a vista = R$%.1f", vista);
    
    return 0;
 }