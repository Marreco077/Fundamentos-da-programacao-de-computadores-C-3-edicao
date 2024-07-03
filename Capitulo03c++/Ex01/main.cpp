/*Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.*/


#include <iostream>

using namespace std;

int main() {
    int num1, num2, subtracao;


    cout <<  "Digite dois numeros: ";
    
    cin >> num1 >> num2;

    subtracao = num1 - num2;

    cout << "A subtracao dos dois eh: " << subtracao << endl;
    
    return 0;
}