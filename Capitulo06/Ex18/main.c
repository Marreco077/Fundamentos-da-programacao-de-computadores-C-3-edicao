/*. Faça um programa que preencha um vetor com quinze números, determine e mostre:
 ■ o maior número e a posição por ele ocupada no vetor;
 ■ o menor número e a posição por ele ocupada no vetor*/

 #include <stdio.h>
 #include <limits.h>
 
 int main(void) {
    int vetor[15];
    int maior = INT_MIN; // inicializado com o menor valor possível
    int menor = INT_MAX; // inicializado com o maior valor possível
    int posMaior = 0;
    int posMenor = 0;

    printf("Digite 15 numeros: \n");

    for (int i = 0; i < 15; i++) {
        scanf("%i", &vetor[i]);

        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("O maior numero eh: %i e esta na posicao: %i\n", maior, posMaior);
    printf("O menor numero eh: %i e esta na posicao: %i\n", menor, posMenor);

    return 0;
}