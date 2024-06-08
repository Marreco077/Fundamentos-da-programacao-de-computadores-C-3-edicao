/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
 ■ a média das idades das pessoas que responderam ótimo;
 ■ a quantidade de pessoas que responderam regular; e
 ■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.*/

 #include <stdio.h>
 
 int main(void) {
    int opniao, idade, contador_regular = 0, contador_otimo = 0; 
    float media_idade = 0, porcentagem_bom = 0;

    for(int i = 1; i <= 15; i++) {
        printf("Digite a sua idade: \n");
        scanf("%i", &idade);
        printf("Digite a sua opniao: [1 2 3]\n"); // opniao 3 otimo 2 bom 1 regular
        scanf("%i", &opniao);
        if(opniao == 3) {
            media_idade += idade;
            contador_otimo++;
        }
        if(opniao == 1) {
            contador_regular++;
        }
        if(opniao == 2) {
            porcentagem_bom++;
        }
    }

    if(contador_otimo >= 1) {
        media_idade /= contador_otimo;
    }
    if(porcentagem_bom >= 1) {
        porcentagem_bom = (porcentagem_bom * 100.0) / 15.0; // calcular porcentagem
    }

    printf("A media das idades que responderam otimo foi de: %.1f\n", media_idade);
    printf("A quantidade de pessoas que responderam regular foi de: %i\n", contador_regular);
    printf("A percentagem de pessoas que responderam bom, entre todas foi de: %.1f%%", porcentagem_bom);
    
    return 0;
 }