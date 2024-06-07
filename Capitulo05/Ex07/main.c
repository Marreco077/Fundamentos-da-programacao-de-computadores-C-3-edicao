/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
 ■ a quantidade de pessoas com idade superior a 50 anos;
 ■ a média das alturas das pessoas com idade entre 10 e 20 anos;
 ■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.*/

 #include <stdio.h>
 
 int main(void) {
    int idade, peso, velha = 0, magra = 0, novos = 0;
    float altura, porcentagem, media;

    for(int i = 1; i <= 5; i++) {
        printf("Digite a idade da pessoa %i:\n", i);
        scanf("%i", &idade);
        printf("Digite o peso da pessoa %i:\n", i);
        scanf("%i", &peso);
        printf("Digite a altura da pessoa %i:\n", i);
        scanf("%f", &altura);
        if(idade>50) {
            velha++;
        }
        if(peso<40) {
            magra++;
        }
        if(idade>=10 && idade <= 20) {
            novos++;
            media += altura;
        }
    }
    media /= novos; // calcular media 
    porcentagem = (magra / 5.0) * 100.0;

    printf("A quantidade de pessoas velhas eh de: %i\n", velha);
    printf("A media das alturas de pessoas entre 10 e 20 anos eh: %.1f\n", media);
    printf("A porcentagem das pessoas com peso inferior a 40 kg eh: %.1f%%\n", porcentagem);
    
    return 0;
 }