/*Faça um programa que receba o peso de uma pessoa em quilos, 
calcule e mostre esse peso em gramas. */

#include <iostream>

using namespace std;

int main() {
    float quilos, gramas;

    cout << "Digite seu peso em quilos: " << endl;
    cin >> quilos;

    gramas = quilos * 1000.0;

    cout << "Seu peso em gramas eh de: " << gramas << endl;

    return 0;
}