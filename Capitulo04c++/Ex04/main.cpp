/*Faça um programa que receba três números e mostre o maior. */

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Digite tres numeros: " << endl;
    cin >> num1 >> num2 >> num3;

    cout << endl << endl; // pular espaço

    if(num1 >= num2 && num1 >= num3) {
        cout << num1 << endl;
    }
    else if(num2 >= num1 && num2 >= num3) {
        cout << num2 << endl;
    }
    else {
        cout << num3 << endl;
    }

    return 0;
}