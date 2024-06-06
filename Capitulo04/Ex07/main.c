/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/


#include <stdio.h>

int main(void) {
  float salario, aumento;

  printf("Digite o salario: ");
  scanf("%f", &salario);

  if(salario<500)
  {
    aumento = salario * 1.30;
    printf("O salario reajustado eh: %.1f", aumento);
  }
  else
  {
    printf("Sem aumento para burgues!");
  }
  return 0;
}