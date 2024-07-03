/*Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2*/

#include <iostream>

using namespace std;

int main() {
    float base_maior, base_menor, altura;
    float area;

    cout << "Digite o valor respectivamente da base maior, base menor e da altura de um trapezio: " << endl;
    cin >> base_maior >> base_menor >> altura;

    area = ((base_maior + base_menor) * altura) / 2;

    cout << "A area do trapezio eh: " << area << endl;
    
    return 0;
}