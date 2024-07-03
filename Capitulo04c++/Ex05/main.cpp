/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
ESCOLHA DO USUÁRIO OPERAÇÃO
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero*/

#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    int opcao;

    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;

    cout << "Digite uma das opcoes: " << endl;
    cout << "1 - Media entre os numeros digitados" << endl;
    cout << "2 - Diferenca do maior pelo menos" << endl;
    cout << "3 - Produto entre os numeros digitados" << endl;
    cout << "4 - Divisao do primeiro pelo segundo" << endl;

    cin >> opcao;

    switch(opcao) {
        case 1:
            cout << "A media entre os numeros eh de: " << (num1+num2) / 2;
            break;
        case 2:
            if(num1 >= num2) {
                cout << "A diferenca do maior pelo menos eh de: " << num1 - num2;
            }
            else {
                cout << "A diferenca do maior pelo menos eh de: " << num2 - num1;
            }
            break;
        case 3:
            cout << "O produto entre os numeros digitados eh de: " << num1 * num2;
            break;
        case 4:
            cout << "A divisao do primeiro pelo segundo eh de: " << num1 / num2;
    }
    
    return 0;
}