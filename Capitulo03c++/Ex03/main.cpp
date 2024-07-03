/*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/

#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    float divisao;

    cout << "Digite dois numeros: " << endl;

    cin >> num1 >> num2;

    divisao = num1 / num2;

    cout << "O resultado da divisao de " << num1 << " / " << num2 << " = " << divisao << endl;
    
    return 0;
}