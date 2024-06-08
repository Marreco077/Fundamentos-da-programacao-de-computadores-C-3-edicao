/*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
 ■ o número de pessoas que responderam sim;
 ■ o número de pessoas que responderam não;
 ■ o número de mulheres que responderam sim; e
 ■ a percentagem de homens que responderam não, entre todos os homens analisados.*/

 #include <stdio.h>
 
 int main(void) {
    char sexo, resposta;
    int contador_sim = 0, contador_nao = 0, contador_mulher = 0, contador_homem = 0;
    float porcentagem_homem = 0;

    for(int i = 1; i <= 10; i++) {
        printf("Digite seu sexo: [H M]\n");
        scanf(" %c", &sexo);
        printf("Digite sua resposta: [S N]\n\n");
        scanf(" %c", &resposta);

        if(resposta == 'S') {   
            contador_sim++;
        }
        else if(resposta == 'N') {
            contador_nao++;
        }

        if(sexo == 'M' && resposta == 'S') {
            contador_mulher++;
        }

        if(sexo == 'H') {
            contador_homem++;
        }

        if(sexo == 'H' && resposta == 'N') {
            porcentagem_homem++;
        }
    }

    porcentagem_homem = (porcentagem_homem / contador_homem) * 100.0;

    printf("Numero de pessoas que disseram sim: %i\n", contador_sim);
    printf("Numero de pessoas que disseram nao: %i\n", contador_nao);
    printf("Numero de mulheres que resposderam sim: %i\n", contador_mulher);
    printf("Percentagem de homens que responderam nao, entre homens analisados: %.1f\n", porcentagem_homem);

    return 0;
 }