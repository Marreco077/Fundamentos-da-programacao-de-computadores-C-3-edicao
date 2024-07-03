/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/

#include <iostream>

using namespace std;

int main() {
    float salario;

    cout << "Digite o salario de um funcionario: " << endl;
    cin >> salario;

    if(salario < 500) {
        cout << "O salario reajustado eh de: " << salario * 1.30 << endl;
    }
    else {
        cout << "SEM REAJUSTE" << endl;
    }
    
    return 0;
}