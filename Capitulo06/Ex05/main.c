/*Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.*/

#include <stdio.h>

int main(void) {
    int logica[15], linguagem[10];

    printf("Digite quinze matriculas da disciplina Logica:\n");
    for(int i = 0; i < 15; i++) {
        scanf("%i", &logica[i]);
    }

    printf("Digite dez matriculas de alunos que estudam Linguagem de Programação:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%i", &linguagem[i]);
    }

    printf("Alunos matriculados em ambos os cursos:\n");
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 10; j++) {
            if(logica[i] == linguagem[j]) {
                printf("Aluno da matricula numero %i esta nos dois cursos.\n", logica[i]);
            }
        }
    }

    return 0;
}

