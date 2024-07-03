/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
SALÁRIO PERCENTUAL DE AUMENTO
Até R$ 300,00 35%
Acima de R$ 300,00 15%
*/

#include <iostream>

using namespace std;

int main() {
    float salario;

    cout << "Digite o salario: " << endl;
    cin >> salario;

    if(salario <= 300) {
        cout << "Salario reajustado eh de: " << salario * 1.35 << endl;
    }
    else {
        cout << "Salario reajustado eh de: " << salario * 1.15 << endl;
    }
    
    return 0;
}