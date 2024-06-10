/*Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.*/

#include <stdio.h>

int main(void) {
    int opcao, nota1, nota2, nota3, peso1, peso2, peso3;
    float media_aritmetica, media_ponderada;

    while(1) {
        printf("Escolha uma opcao: \n");
        printf("Opcao 1: media aritmetica: \n");
        printf("Opcao 2: Media ponderada\n");   
        printf("Opcao 3: sair\n");
        scanf("%i", &opcao);
        printf("------------------------\n");

        if(opcao == 1) {
            printf("Digite duas notas: \n");
            scanf("%i%i", &nota1, &nota2);
            media_aritmetica = (nota1 + nota2) / 2.0;
            printf("O resultado eh: %.1f\n\n", media_aritmetica);
        }
        else if(opcao == 2) {
            printf("Digite tres notas: \n");
            scanf("%i%i%i", &nota1, &nota2, &nota3);
            printf("Digite o peso das tres notas agora: \n");
            scanf("%i%i%i", &peso1, &peso2, &peso3);
            media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / ((float)peso1 + peso2 + peso3);
            printf("O resultado foi: %.1f\n\n", media_ponderada); 
        }
        else if(opcao == 3) {
            break;
        }
        else {
            printf("ERRO!\n\n");
        }
    }

    return 0;
}