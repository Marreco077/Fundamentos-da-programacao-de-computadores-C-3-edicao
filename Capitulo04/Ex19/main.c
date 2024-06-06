//  Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
// ■ para homens: (72.7 * h) – 58.
// ■ para mulheres: (62.1 * h) – 44.7. 

#include <stdio.h>

int main(void) {
    float altura, peso;
    char sexo;
    
    printf("Digite a sua altura(em metros): ");
    scanf("%f", &altura);
    printf("Digite seu sexo(H M): \n");
    scanf(" %c", &sexo);

    if(sexo == 'H') {
        peso = (72.7 * altura) - 58;
    }
    else if(sexo == 'M') {
        peso = (62.1 * altura) - 44.7;
    }
    else {
        printf("INVALIDO");
        return 1;
    }

    printf("Seu peso ideal eh: %.1f", peso);
    return 0;
}