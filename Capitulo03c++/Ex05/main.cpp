/* Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/

#include <iostream>

using namespace std;

int main() {
    float preco;

    cout << "Digite o preco de um produto: " << endl;

    cin >> preco;

    preco *= 0.90;

    cout << "Preco reajustado eh de: " << preco << endl;

    return 0;
}