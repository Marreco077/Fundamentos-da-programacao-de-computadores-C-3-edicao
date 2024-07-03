/*Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, 
considerando peso 2 para a primeira e peso 3 para a segunda. */

#include <iostream>

using namespace std;

int main() {
    float nota1, nota2;
    float media;

    cout << "Digite duas notas: " << endl;

    cin >> nota1 >> nota2;

    media = (nota1 * 2 + nota2 * 3) / 5;

    cout << "A media final eh de: " << media << endl;

    return 0;
}