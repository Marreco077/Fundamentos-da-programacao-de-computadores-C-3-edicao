/* Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas*/

#include <stdio.h>

int main(void) {
    int idade, faixa1=0, faixa2=0, faixa3=0, faixa4=0, faixa5=0;
    float porcentagem1, porcentagem5;
    printf("Digite a idade de oito pessoas: \n");

    for(int i=0;i<8; i++) {
        scanf("%i", &idade);
        if(idade<=15) {
            faixa1++;
        }
        else if(idade<=30) {
            faixa2++;
        }
        else if(idade<=45) {
            faixa3++;
        }
        else if(idade<=60) {
            faixa4++;
        }
        else {
            faixa5++;
        }
    }

    porcentagem1 = (faixa1 / 8.0) * 100.0; // calcular porcentagem
    porcentagem5 = (faixa5 / 8.0) * 100.0;

    printf("%i pessoas na 1 faixa etaria\n", faixa1);
    printf("%i pessoas na 2 faixa etaria\n", faixa2);
    printf("%i pessoas na 3 faixa etaria\n", faixa3);
    printf("%i pessoas na 4 faixa etaria\n", faixa4);
    printf("%i pessoas na 5 faixa etaria\n", faixa5);

    printf("%.1f%% das pessoas estao na 1 faixa etaria\n", porcentagem1);
    printf("%.1f%% das pessoas estao na 5 faixa etaria\n", porcentagem5);

   return 0;
}