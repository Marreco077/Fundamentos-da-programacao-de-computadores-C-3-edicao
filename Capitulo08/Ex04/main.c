/*Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3.*/

#include <stdio.h>
#include <math.h>

float volume_esfera(float r) {
    float calcula_esfera;

    calcula_esfera = 4.0 / 3.0 * pow(r, 3);

    return calcula_esfera;
}

int main(void) {
    float raio;

    printf("Digite o raio de uma esfera: \n");
    scanf("%f", &raio);

    printf("O volume da esfera eh: %.2f", volume_esfera(raio));
    
    return 0;
}