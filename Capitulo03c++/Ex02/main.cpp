/*Faça um programa que receba três números, calcule e mostre a multiplicação desses números.*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    int multiplica;

    cout << "Digite tres numeros: " << endl;

    cin >> num1 >> num2 >> num3;

    multiplica = num1 * num2 * num3;

    cout << "A multiplicacao de: " << num1 << " * " << num2 << " * " << num3 << " = " << multiplica << endl;

    return 0;
}