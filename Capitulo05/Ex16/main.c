/*Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas.
 Finalize digitando idade igual a zero. */

 #include <stdio.h>
 
 int main(void) {
    int idade, contador_idades = 0;
    float media;
    
    do {
        printf("Digite idades, 0 encerra o loop e faz a media: \n");
        scanf("%i", &idade);
        if(idade > 0) {
            media += idade;
            contador_idades++;
        }
    } while(idade != 0);

    media /= contador_idades;

    printf("A media das idades foi de: %.1f", media);
    return 0;
 }