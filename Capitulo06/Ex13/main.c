/* Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1o
 aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2o
 aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??*/


#include <stdio.h>

int main(void) {
    char nomes[8][40];
    float notas[8];
    float media = 0;

    for(int i = 0; i < 8; i++) {
        printf("Digite o nome do %i aluno: ", i+1);
        scanf("%s", nomes[i]);
        printf("Digite a nota do %s: ", nomes[i]);
        scanf("%f", &notas[i]);
        media += notas[i];
    } 

    printf("\nRelatorio de notas: ");

    for(int i = 0; i < 8; i++) {
        printf("%s %.1f\n", nomes[i], notas[i]);
    }

    media /= 8;

    printf("Media da classe = %.1f", media);

    return 0;
}