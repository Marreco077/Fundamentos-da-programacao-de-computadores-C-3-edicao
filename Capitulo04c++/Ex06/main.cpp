/*Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcao;
    float num1, num2;

    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;

    cout << "Escolha uma opcao: [opcao encerrara o programa]" << endl;
    cout << "1 - O primeiro numero elevado ao segundo numero: " << endl;
    cout << "2- A raiz quadrada de cada um dos numeros: " << endl;
    cout << "3 - Raiz cubica de cada um dos numeros: " << endl;

    cin >> opcao;

    switch(opcao) {
        case 1: 
            cout << num1 << " elevado a " << num2 << " = " << pow(num1, num2) << endl;
            break;
        case 2: 
            cout << "Raiz quadrada de " << num1 << " e " << num2 << " = " << sqrt(num1) << " , " << sqrt(num2) << endl;
            break;
        case 3:
            cout << "Raiz cubica de " << num1 << " e " << num2 << " = " << cbrt(num1) << " , " << cbrt(num2) << endl;
            break;
        default:
            cout << "Erro!" << endl;
            break;
    }

    return 0;
}