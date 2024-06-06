// Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir: 


#include <stdio.h>

int main(void) {
  float nota1, nota2, media;

  printf("Digite duas notas: \n");
  scanf("%f%f", &nota1, &nota2);

  media = (nota1 + nota2) / 2;

  if(media>=7 && media<=10)
  {
    printf("Aprovado!");
  }
  else if(media>=3 && media<=7)
  {
    printf("Exame");
  }
  else if(media>=0 && media<=3)
  {
    printf("Reprovado");
  }
  else
  {
    printf("Erro");
  }
  return 0;
}