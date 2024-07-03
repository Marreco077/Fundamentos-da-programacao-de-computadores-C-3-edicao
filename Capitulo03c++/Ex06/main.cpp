/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.*/

#include <iostream>


using namespace std;

const float salario = 1000.0; // Salário fixo como uma constante global

int main() {
    float vendas, comissao, salario_final;

    cout << "Digite as vendas do funcionario:" << endl;

    cin >> vendas;

    comissao = vendas * 0.04;
    salario_final = salario + comissao;

    cout << "Valor da comissao: " << comissao << endl;
    cout << "Salario final: " << salario_final << endl;

    return 0;
}