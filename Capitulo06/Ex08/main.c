/*Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
 ■ o nome do aluno com maior média (desconsiderar empates);
 ■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar na prova
  de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.*/

#include <stdio.h>

int main(void) {
    char nomes[7][50];
    float media[7], maior_media = 0;
    int index_maior_media = 0;

    printf("Digite o nome de 7 alunos: \n");
    for(int i = 0; i < 7; i++) {
        scanf("%s", nomes[i]);
    }

    printf("Digite a media de 7 alunos: \n");
    for(int i = 0; i < 7; i++) {
        scanf("%f", &media[i]);

        if(media[i] > maior_media) {
            maior_media = media[i];
            index_maior_media = i;
        }
    }

    // Mostrar o aluno com a maior media
    printf("\nAluno com a maior media:\n");
    printf("Nome: %s, Media: %.2f\n", nomes[index_maior_media], maior_media);

    // Calcular e mostrar quanto cada aluno nao aprovado precisa tirar na prova de exame final para ser aprovado
    printf("\nAlunos nao aprovados e suas necessidades na prova de exame final:\n");
    for(int i = 0; i < 7; i++) {
        if (media[i] < 7) {
            float nota_exame = (10 - media[i]);
            printf("Aluno %s precisa tirar %.2f na prova de exame final para ser aprovado.\n", nomes[i], nota_exame);
        }
    }

    return 0;
}

