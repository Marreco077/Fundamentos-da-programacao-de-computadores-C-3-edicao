// Faça um programa que receba três números e mostre o maior.

#include <stdio.h>

int main(void) {
  int num1, num2, num3, maior;

  printf("Digite tres numeros : ");
  scanf("%i%i%i", &num1, &num2, &num3);

  if(num1>=num2 && num1>=num3)
  {
    maior = num1;
  }
  else if(num2>=num1 && num2>=num3)
  {
    maior = num2;
  }
  else
  {
    maior = num3;
  }

  printf("O maior numero eh: %i", maior);
  return 0;
}