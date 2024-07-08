/* Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e
 retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).*/

 #include <stdio.h>
 
 int soma(int n) {
    int soma_total = 0;

    for(int i = 1; i <= n; i++) {
        soma_total += i;
    }

    return soma_total;
 }

 int main(void) {
    int numero;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    printf("Soma total eh: %i \n", soma(numero));
    
    return 0;
 }