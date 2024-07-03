/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
MÉDIA ARITMÉTICA MENSAGEM
0,0 3,0 Reprovado
3,0 7,0 Exame
7,0 10,0 Aprovado
*/

#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, media;

    cout << "Digite duas notas: " << endl;
    cin >> nota1 >> nota2;

    media = (nota1 + nota2) / 2.0;

    if(media >= 7) {
        cout << "Aprovado!" << endl;
    }
    else if(media >= 3) {
        cout << "Exame!" << endl;
    }
    else {
        cout << "Reprovado!" << endl;
    }
    
    return 0;
}