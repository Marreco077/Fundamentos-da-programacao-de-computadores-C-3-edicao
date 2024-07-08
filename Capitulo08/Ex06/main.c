/*Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.*/

#include <stdio.h>

float calcula_peso(float a, char s) {
    float peso;
    if(s == 'M') {
        peso = 62.1 * a - 44.7;
    }
    else if(s == 'H') {
        peso = 72.7 * a - 58;
    }
    else {
        return -1;
    }

    return peso;
}

int main(void) {
    float altura;
    char sexo;

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu sexo: [M/H]\n");
    scanf(" %c", &sexo);

    printf("Seu peso ideal eh: %.2f", calcula_peso(altura, sexo));  

   return 0;
}