/*. Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Faça um programa que calcule e mostre:
 ■ o total de votos para cada candidato;
 ■ o total de votos nulos;
 ■ o total de votos em branco;
 ■ a porcentagem de votos nulos sobre o total de votos; e
 ■ a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem.*/

#include <stdio.h>

int main(void) {
    int voto, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0, contador_nulo = 0, contador_branco = 0, contador_total = 0;
    float porcentagem_nulo = 0, porcentagem_branco = 0;

    while(1) {
        printf("Digite o seu voto: [1 2 3 4 5 6], [0 para sair]\n");
        scanf("%i", &voto);

        if(voto == 0) {
            break;
        }

        if(voto == 1) {
            contador1++;
        }
        else if(voto == 2) {
            contador2++;
        }
        else if(voto == 3) {
            contador3++;
        }
        else if(voto == 4) {
            contador4++;
        }
        else if(voto == 5) {
            contador_nulo++;
        }
        else if(voto == 6) {
            contador_branco++;
        }
        else {
            printf("Invalido!! \n\n");
            continue; // nao contabilizar numeros invalidos
        }
        contador_total++;
    }

    porcentagem_nulo = (contador_nulo / (float)contador_total) * 100.0;
    porcentagem_branco = (contador_branco / (float)contador_total) * 100.0;

    printf("Total de votos para canditado 1: %i\n", contador1);
    printf("Total de votos para canditado 2: %i\n", contador2);
    printf("Total de votos para canditado 3: %i\n", contador3);
    printf("Total de votos para canditado 4: %i\n", contador4);
    printf("Total de votos nulos: %i\n", contador_nulo);
    printf("Total de votos em branco: %i\n", contador_branco);
    printf("A porcentagem de votos nulos sobre o total de votos eh de: %.1f\n", porcentagem_nulo);
    printf("A porcentagem de votos em branco sobre o total de votos eh de: %.1f\n", porcentagem_branco);

    return 0;
}