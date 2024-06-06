// Faça um programa que receba dois números e execute as operações listadas a
// seguir, de acordo com a escolha do usuário. Se a opção digitada for inválida,
// mostre uma mensagem de erro e termine a execução do programa. Lembre-se de
// que, na operação 4, o segundo número deve ser diferente de zero.

#include <stdio.h>

int main(void) {
  float num1, num2, media, subtracao, multiplicacao, divisao;
  int opcao;

  printf("Digite dois numeros: ");
  scanf("%f%f", &num1, &num2);
  printf("Digite uma opcao: \n");
  printf("1-Media\n");
  printf("2-Subtracao\n");
  printf("3-Multiplicacao\n");
  printf("4-Divisao\n");
  scanf("%i", &opcao);

  switch (opcao) {
  case 1:
    media = (num1 + num2) / 2;
    printf("%f", media);
    break;
  case 2:
    subtracao = num1 - num2;
    printf("%f", subtracao);
    break;
  case 3:
    multiplicacao = num1 * num2;
    printf("%f", multiplicacao);
    break;
  case 4:
    if(num2==0)
    {
      printf("Erro");
    }
    else
    {
      divisao = num1 / num2;
      printf("%f", divisao);
    }
    break;
  default:
    printf("Invalido!");
    break;
  }
  return 0;
}