/*Defina uma classe ContaBancaria com os seguintes atributos: numero, titular, saldo e limite. Esta classe deve ter métodos para:

Realizar depósitos na conta.
Realizar saques da conta, respeitando o limite de saque.
Consultar o saldo disponível na conta.
Crie um programa em C++ que permita ao usuário realizar as seguintes operações:

Criar uma conta bancária com um número, titular, saldo inicial e limite de saque.
Realizar operações de depósito e saque na conta.
Consultar o saldo disponível na conta após cada operação.*/

#include <iostream>
#include <string>

using namespace std;

class Conta_bancaria {

private:
    int numero;
    string titular, opcao;
    float saldo;
    float limite;
    float depositar, sacar;

public:
    // construtor
    Conta_bancaria(int n, string t, float s, float l) : numero(n), titular(t), saldo(s), limite(l) {}

    float deposito() {
        cout << "Digite o valor que deseja depositar: " << endl;
        cin >> depositar;
        saldo += depositar;
        
        return saldo;
    }
    float saques() {
        cout << "Digite o valor que deseja sacar: " << endl;
        cin >> sacar;
        
        if(sacar > limite) {
            cout << "Ultrapassou o limite, operacao cancelada!" << endl;
        }
        else {
            saldo -= sacar;
        }
        return saldo;
    }

    float caixa_bancario() {
        
        cout << endl;
        
        while(1) {
            cout << "Digite se deseja depositar, sacar[D/S] ou sair[Sair]: " << endl;
            cin >> opcao;
            
            if(opcao == "Sair") {
                break;
            }
            else if(opcao == "D") {
                deposito();
            }
            else if(opcao == "S") {
                saques();
            }
            else {
                cout << "Operacao invalida!" << endl;
            }

            cout << "Saldo atual: " << saldo << endl;
        }
        return saldo;
    }

    void exibir() {
        cout << endl;
        cout << "Saldo final: " << saldo;
    }
};


int main() {
    int numero;
    string titular;
    float saldo, limite;

    cout << "Aplicativo Banco" << endl;
    cout << "----------------------" << endl << endl;
    cout << "Digite o numero do titular: " << endl;
    cin >> numero;
    cin.ignore(); // limpar o buffer
    cout << "Digite o nome do titular: " << endl;
    getline(cin, titular);
    cout << "Digite o saldo inicial: " << endl;
    cin >> saldo;
    cout << "Digite o limite de saque: " << endl;
    cin >> limite;

    Conta_bancaria conta_bancaria(numero, titular, saldo, limite);

    conta_bancaria.caixa_bancario();
    conta_bancaria.exibir();

    return 0;
}