/*Elabore um programa que: receba a idade de oito alunos e armazene-as em um vetor; armazene o código
de cinco disciplinas em outro vetor; armazene em uma matriz a quantidade de provas que cada aluno fez
em cada disciplina.
O programa deverá calcular e mostrar:
 ■ a quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas em determinada disciplina cujo código é digitado pelo usuário. O usuário poderá digitar um código não
cadastrado; nesse caso, o programa deverá mostrar uma mensagem de erro;
 ■ uma listagem contendo o código dos alunos que fizeram menos que três provas em determinada
disciplina, seguido do código da disciplina;
 ■ a média de idade dos alunos que não fizeram nenhuma prova em alguma disciplina. Cuidado para
não contar duas vezes o mesmo aluno. */

// Livro esta errado, o Ex 11 e 12 são um só na verdade, peguei do chargpt essa aqui, enunciado está todo bagunçado, não tem sentido algum, falando de código de aluno ? aluno que fez menos que 3 provas?

#include <stdio.h>

int main(void) {
    int idade[8];
    int disciplina[5];
    int matriz[8][5];
    int codigo_disciplina;
    int contador_provas = 0;
    int soma_idade = 0;
    int alunos_sem_provas = 0;

    // Entrada de dados das idades dos alunos
    for(int i = 0; i < 8; i++) {
        printf("Digite a idade do %i aluno: \n", i+1);
        scanf("%i", &idade[i]);
    }

    // Entrada dos códigos das disciplinas
    for(int i = 0; i < 5; i++) {
        printf("Digite o código da disciplina %i: \n", i+1);
        scanf("%i", &disciplina[i]);
    }

    // Entrada da matriz de quantidade de provas feitas por cada aluno em cada disciplina
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite quantas provas o aluno %i fez na disciplina de código %i: \n", i+1, disciplina[j]);
            scanf("%i", &matriz[i][j]);
        }
    }

    // Solicitar código da disciplina para verificar
    printf("Digite o código da disciplina a ser verificada: \n");
    scanf("%i", &codigo_disciplina);

    // Verificar se a disciplina existe
    int disciplina_existe = 0;
    int indice_disciplina = -1;
    for(int i = 0; i < 5; i++) {
        if(disciplina[i] == codigo_disciplina) {
            disciplina_existe = 1;
            indice_disciplina = i;
            break;
        }
    }

    if(!disciplina_existe) {
        printf("Erro! Código da disciplina não cadastrado.\n");
    } else {
        // Contar alunos com idade entre 18 e 25 anos que fizeram mais de duas provas na disciplina fornecida
        for(int i = 0; i < 8; i++) {
            if(idade[i] >= 18 && idade[i] <= 25 && matriz[i][indice_disciplina] > 2) {
                contador_provas++;
            }
        }
        printf("Quantidade de alunos entre 18 e 25 anos que fizeram mais de duas provas na disciplina %i: %i\n", codigo_disciplina, contador_provas);

        // Listagem dos alunos que fizeram menos de três provas em qualquer disciplina
        printf("Alunos que fizeram menos de três provas em alguma disciplina:\n");
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 5; j++) {
                if(matriz[i][j] < 3) {
                    printf("Aluno %i na disciplina %i\n", i+1, disciplina[j]);
                }
            }
        }

        // Calcular média de idade dos alunos que não fizeram nenhuma prova em alguma disciplina
        int aluno_ja_contado[8] = {0};
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 5; j++) {
                if(matriz[i][j] == 0 && !aluno_ja_contado[i]) {
                    soma_idade += idade[i];
                    alunos_sem_provas++;
                    aluno_ja_contado[i] = 1;
                }
            }
        }

        if(alunos_sem_provas > 0) {
            double media_idade = (double)soma_idade / alunos_sem_provas;
            printf("Média de idade dos alunos que não fizeram nenhuma prova: %.2f\n", media_idade);
        } else {
            printf("Nenhum aluno deixou de fazer todas as provas.\n");
        }
    }

    return 0;
}
