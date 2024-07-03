/*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/

#include <iostream>

using namespace std;

int main() {
    float notas[4];
    float media = 0.0;

    cout << "Digite 4 notas de um aluno: " << endl;
    
    for(int i = 0; i < 4; i++) {
        cin >> notas[i];
        media += notas[i]; // media vai armazenar valor total para depois fazer a media em si
    }

    media /= 4;

    if(media >= 7) {
        cout << "Aprovado" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    return 0;
}