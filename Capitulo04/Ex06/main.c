/* Faça um programa que receba dois números e execute uma das operações listadas
a seguir, de acordo com a escolha do usuário. Se for digitada uma opção
inválida, mostre mensagem de erro e termine a execução do programa. As opções
são: a) O primeiro número elevado ao segundo número. b) Raiz quadrada de cada um
dos números. c) Raiz cúbica de cada um dos números. */

#include <math.h>
#include <stdio.h>

int main(void) {
  float num1, num2, resultado, raiz1, raiz2;
  int opcao;

  printf("Digite dois numeros: ");
  scanf("%f%f", &num1, &num2);
  printf("Digite a opcao desejada: ");
  printf("1 - O primeiro número elevado ao segundo número\n");
  printf("2 - Raiz quadrada de cada um dos números\n");
  printf("3 - Raiz cúbica de cada um dos números\n");
  scanf("%i", &opcao);

  switch (opcao) {
  case 1:
    resultado = pow(num1, num2);
    printf("%f", resultado);
    break;
  case 2:
    raiz1 = sqrt(num1);
    raiz2 = sqrt(num2);
    printf("%f  %f", raiz1, raiz2);
    break;
  case 3:
    raiz1 = cbrt(num1);
    raiz2 = cbrt(num2);
    printf("%f   %f", raiz1, raiz2);
    break;
    default:
    printf("Erro");
  }
  return 0;
}