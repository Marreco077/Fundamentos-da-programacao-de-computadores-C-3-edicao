/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
 ■ o valor total das compras à vista;
 ■ o valor total das compras a prazo;
 ■ o valor total das compras efetuadas; e
 ■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. */

 #include <stdio.h>
 
 int main(void) {
    float vista  = 0, prazo = 0, total = 0, compra, prestacao;
    char codigo;

    for(int i = 1; i <= 15; i++) {
        printf("Digite o codigo da compra [V P]: \n");
        scanf(" %c", &codigo);
        printf("Digite o valor da compra: \n");
        scanf("%f", &compra);
        if(codigo == 'V') {
            vista += compra;
        }
        else if(codigo == 'P') {
            prazo += compra;
        }
        else {
            printf("Invalido\n");
            return 1;
        }
        total += compra;
    }

    prestacao = prazo / 3;

    printf("O valor total das compras foi de %.1f\n", total);
    printf("O valor total das compras a vista foi de: %.1f\n", vista);
    printf("O valor total das compras a prazo foi de: %.1f\n", prazo);
    printf("O primeiro valor das prestacoes foi de: %.1f\n", prestacao);
    
    return 0;
 }