/*Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne Xz
 sem utilizar
funções ou operadores de potência prontos.*/

#include <stdio.h>

float potencia(float x, float z) {
    float potencial = x;

    for(int i = 1; i < z; i++) {
        potencial *= x;
    }
    return potencial;
}

int main(void) {
    float x, z;

    printf("Digite dois valores: \n");
    scanf("%f%f", &x, &z);   
    
    printf("Resultado eh: %.2f", potencia(x, z));
    
    return 0;
}