/*Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.*/

#include <stdio.h>

int main(void) {
    int idade, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;
    float peso, peso1 = 0, peso2 = 0 , peso3 = 0, peso4 = 0;

    for(int i = 1; i <= 15; i++) {
        printf("Digite a idade da %iª pessoa: \n", i);
        scanf("%i", &idade);
        printf("Digite o peso da %iª pessoa: \n", i);
        scanf("%f", &peso);

        if(idade <= 10) {
            peso1 += peso;
            contador1++;
        }
        else if(idade <= 20) {
            peso2 += peso;
            contador2++;
        }
        else if(idade <= 30) {
            peso3 += peso;
            contador3++;
        }
        else {
            peso4 += peso;
            contador4++;
        }
    }

    if (contador1 > 0) peso1 /= contador1;
    if (contador2 > 0) peso2 /= contador2;
    if (contador3 > 0) peso3 /= contador3;
    if (contador4 > 0) peso4 /= contador4;

    printf("A media da primeira faixa etaria eh de: %.1f\n", peso1);
    printf("A media da segunda faixa etaria eh de: %.1f\n", peso2);
    printf("A media da terceira faixa etaria eh de: %.1f\n", peso3);
    printf("A media da quarta faixa etaria eh de: %.1f\n", peso4);
   
    return 0;
}
