/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.*/

#include <stdio.h>

int main(void) {
  float salario;

  printf("Digite o salario: \n");
  scanf("%f", &salario);

  if(salario>300)
  {
    salario = salario * 1.35;
  }
  else
  {
    salario = salario * 1.15;
  }
  printf("Salario reajustado é: %.1f", salario);
  return 0;
}