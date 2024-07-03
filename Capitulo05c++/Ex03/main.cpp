/*Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
FAIXA ETÁRIA IDADE
1
a Até 15 anos
2
a De 16 a 30 anos
3
a De 31 a 45 anos
4
a De 46 a 60 anos
5
a Acima de 60 anos*/

#include <iostream>

using namespace std;

int main() {
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    float porcentagem1, porcentagem5;

    for(int i = 0; i < 8; i++) {
        cout << "Digite a idade da pessoa de numero " << i+1 << ":" << endl;
        cin >> idade;

        if(idade <= 15) {
            faixa1++;
        }
        else if(idade <= 30) {
            faixa2++;
        }
        else if(idade <= 45) {
            faixa3++;
        }
        else if(idade <= 60) {
            faixa4++;
        }
        else {
            faixa5++;
        }
    }

    porcentagem1 = (faixa1 / 8.0) * 100.0;
    porcentagem5 = (faixa5 / 8.0) * 100.0;

    cout << "Total de pessoas na faixa etaria 1: " << faixa1 << endl;
    cout << "Total de pessoas na faixa etaria 2: " << faixa2 << endl;
    cout << "Total de pessoas na faixa etaria 3: " << faixa3 << endl;
    cout << "Total de pessoas na faixa etaria 4: " << faixa4 << endl;
    cout << "Total de pessoas na faixa etaria 5: " << faixa5 << endl;
    cout << "Porcentagem de pessoas na primeira faixa etaria: " << porcentagem1 << endl;
    cout << "Porcentagem de pessoas na quinta faixa etaria: " << porcentagem5 << endl;

    return 0;
}