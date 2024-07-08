/*Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, 
minutos e segundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.*/

#include <stdio.h>

int calcula_segundos(int h, int m, int s) { // horas, minutos, segundos
    int converte = 0;

    converte = (h * 3600) + (m * 60) + s;

    return converte;
}

int main(void) {
    int horas, minutos, segundos;

    printf("Digite as horas: \n");
    scanf("%i", &horas);
    printf("Digite os minutos: \n");
    scanf("%i", &minutos);
    printf("Digite os segundos: \n");
    scanf("%i", &segundos);
    
    printf("O resultado eh: %i", calcula_segundos(horas, minutos, segundos));

    return 0;
}

