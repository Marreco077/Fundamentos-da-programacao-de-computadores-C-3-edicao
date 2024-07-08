/* Elabore uma sub-rotina que leia um número não determinado de valores positivos e 
retorne a média aritmética desses valores. Terminar a entrada de dados com o valor zero*/

#include <stdio.h>

float media() {
    float numeros, soma_total = 0, media = 0;
    int contador = 0;

    while(numeros != 0) {
        printf("Digite numeros: [0 sai]\n");
        scanf("%f", &numeros);
        if(numeros > 0) {
            soma_total += numeros;
            contador++;
        }
        else {
            printf("Invalido\n");
        }
    }
    media = soma_total / (float)contador;
    
    return media;
}

int main(void) {

    printf("Media dos numeros eh de: %.2f", media());
    
    return 0;
}