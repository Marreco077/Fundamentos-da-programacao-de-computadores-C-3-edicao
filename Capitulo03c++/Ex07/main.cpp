/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.*/

#include <iostream>

using namespace std;

int main() {
    float peso;

    cout << "Digite o seu peso: ";

    cin >> peso;

    cout << "Seu peso se engordar 15% sera de: " << peso * 1.15 << endl;
    cout << "Seu peso se emagrecer 20% sera de: " << peso * 0.80 << endl;
    
    return 0;
}