/* Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero. */

#include <stdio.h>

int main(void) {
    int idade, contador = 0;
    float altura, media_altura, altura_velho;

    while(1) {
        printf("Digite sua idade: [0 ou menor para encerrar] \n");
        scanf("%i", &idade);
        
        if(idade <= 0) {
            break;
        }

        printf("Digite sua altura: \n");
        scanf("%f", &altura);
        
        if(idade > 50) {
            contador++;
            altura_velho += altura;
        }
    }

    if(contador > 0) {
        media_altura = altura_velho  / contador;
    }

    printf("A media das alturas de pessoas velhas eh de: %.2f", media_altura);
    
    return 0;
}