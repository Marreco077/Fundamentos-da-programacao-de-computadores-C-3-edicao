/*Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas:
Carlos 8,0 9,0 8,5 Aprovado
Pedro 4,0 5,0 4,5 Reprovado
 ■ média da classe = ?
 ■ percentual de alunos aprovados = ?%
 ■ percentual de alunos de exame = ?%
 ■ percentual de alunos reprovados = ?% */

#include <stdio.h>

int main(void) {
    char nomes[6][20];
    float notas1[6], notas2[6], medias[6];
    float soma_total = 0, media_classe;
    int contador_aprovados = 0, contador_exame = 0, contador_reprovados = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite o nome do %do aluno: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a primeira nota do %s: ", nomes[i]);
        scanf("%f", &notas1[i]);
        printf("Digite a segunda nota do %s: ", nomes[i]);
        scanf("%f", &notas2[i]);

        medias[i] = (notas1[i] + notas2[i]) / 2;
        soma_total += medias[i];

        if (medias[i] >= 7) {
            contador_aprovados++;
        } else if (medias[i] >= 5) {
            contador_exame++;
        } else {
            contador_reprovados++;
        }
    }

    media_classe = soma_total / 6.0;
    float percentual_aprovados = (contador_aprovados / 6.0) * 100.0;
    float percentual_exame = (contador_exame / 6.0) * 100.0;
    float percentual_reprovados = (contador_reprovados / 6.0) * 100.0;

    printf("\nRelatorio de notas:\n");
    for (int i = 0; i < 6; i++) {
        printf("%s %.1f %.1f %.1f ", nomes[i], notas1[i], notas2[i], medias[i]);
        if (medias[i] >= 7) {
            printf("Aprovado\n");
        } else if (medias[i] >= 5) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    printf("\nMedia da classe = %.1f\n", media_classe);
    printf("Percentual de alunos aprovados = %.1f%%\n", percentual_aprovados);
    printf("Percentual de alunos de exame = %.1f%%\n", percentual_exame);
    printf("Percentual de alunos reprovados = %.1f%%\n", percentual_reprovados);

    return 0;
}