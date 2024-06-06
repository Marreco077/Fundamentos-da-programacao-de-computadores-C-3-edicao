// Faça um programa que receba dois números e mostre o menor. 

#include <stdio.h>

int main(void) {
  int num1, num2;

  printf("Digite dois numeros: ");
  scanf("%i%i", &num1, &num2);

  if(num1>num2)
  {
    printf("O maior é: %i", num1);
  }
  else
  {
    printf("O maior é: %i", num2);
  }
  return 0;
}