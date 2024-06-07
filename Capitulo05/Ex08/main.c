/* Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
 ■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
 ■ a média das idades das pessoas com altura inferior a 1,50 m;
 ■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
 ■ a quantidade de pessoas ruivas e que não possuem olhos azuis. */

 #include <stdio.h>
 
 int main(void) {
    int idade, peso, velho_magro = 0, total_baixos = 0, total_azuis = 0, ruivos_outraCor = 0;
    float altura, media_baixos, porcentagem_azuis;
    char olho, cabelo;

    for(int i = 1; i <= 6; i++) {
        printf("Digite a idade da pessoa %i: \n", i);
        scanf("%i", &idade);
        printf("Digite o peso da pessoa %i: \n", i);
        scanf("%i", &peso);
        printf("Digite a altura da pessoa %i: \n", i);
        scanf("%f", &altura);
        printf("Digite a cor dos olhos da pessoa %i [A P V C]: \n", i);
        scanf(" %c", &olho);
        printf("Digite a cor do cabelo da pessoa %i[P C L R]: \n", i);
        scanf(" %c", &cabelo);

        if(idade > 50 && peso < 60) {
            velho_magro++;
        }
        if(altura < 1.5) {
            media_baixos += idade;
            total_baixos++;
        }
        if(olho == 'A') {
            total_azuis++;
        }
        if(cabelo == 'R' && olho != 'A') {
            ruivos_outraCor++;
        }
    }

    media_baixos /= total_baixos;
    porcentagem_azuis = (total_azuis / 6.0) * 100.0;

    printf("Quantidade de pessoas com idade superior a 50 e peso menor que 60: %i\n", velho_magro);
    printf("Media das idades da pessoas com altura inferior a 1.50: %.1f\n", media_baixos);
    printf("A porcentagem de pessoas com olhos azuis eh de: %.1f%%", porcentagem_azuis);
    printf("A quantidade de pessoas ruivas que nao possuem olhos azuis eh de: %i", ruivos_outraCor);
    

    return 0;
 }