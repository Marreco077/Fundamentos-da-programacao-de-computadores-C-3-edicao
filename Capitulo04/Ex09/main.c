/*Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.*/

#include <stdio.h>

int main(void) {
  float credito, saldo;

  printf("Digite o saldo: ");
  scanf("%f", &saldo);

  if(saldo<=200)
  {
    credito = saldo * 0.10;
  }
  else if(saldo<300)
  {
    credito = saldo * 0.20;
  }
  else if(saldo<400)
  {
    credito = saldo * 0.25;
  }
  else
  {
    credito = saldo * 0.30;
  }

  saldo = credito + saldo;

  printf("O valor do credito é de: %.1f, e do saldo final é: %.1f", credito, saldo);
  return 0;
}