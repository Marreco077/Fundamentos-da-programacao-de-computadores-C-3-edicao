/*Faça um programa que receba dois números e mostre o menor*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;

    if(num1 <= num2) {
        cout << num1 << endl;
    }
    else {
        cout << num2 << endl;
    }
    return 0;
}