/* Faça um programa que receba:
 ■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15  5;
 ■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
O programa deverá calcular e mostrar:
 ■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);
 ■ a média da classe.*/

#include <stdio.h>

int main(void) {
    float notas[15][5];
    char nomes[15][30];
    float media[15] = {0};
    float media_classe = 0;

    // Recebe os nomes e as notas dos alunos
    for(int i = 0; i < 15; i++) {
        printf("Digite o nome do aluno %i: \n", i+1);
        scanf("%s", nomes[i]);

        for(int j = 0; j < 5; j++) {
            printf("Digite a nota de %s na prova %i: \n", nomes[i], j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calcula a média de cada aluno e a média da classe
    for(int i = 0; i < 15; i++) {
        float soma = 0;
        for(int j = 0; j < 5; j++) {
            soma += notas[i][j];
        }
        media[i] = soma / 5.0;
        media_classe += media[i];
    }

    media_classe /= 15.0;

    // Mostra a média de cada aluno e a situação
    for(int i = 0; i < 15; i++) {
        printf("Aluno: %s, Media: %.1f,", nomes[i], media[i]);

        if(media[i] >= 6) {
            printf(" Aprovado\n");
        }
        else if(media[i] >= 4) {
            printf(" Exame\n");
        }
        else {
            printf(" Reprovado\n");
        }
    }

    // Mostra a média da classe
    printf("Media final da turma: %.1f\n", media_classe);

    return 0;
}
