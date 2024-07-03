/*Defina uma classe PESSOA com os seguintes atributos: nome e idade. 
Essa classe deve ter, também, um método para calcular a idade em meses. 
Carregue os atributos anteriores de uma pessoa, calcule e mostre:
a) a idade da pessoa em meses;
b) a idade que a pessoa terá em 2050 (outro método).*/

#include <iostream>
#include <string>

using namespace std;


class Pessoa {

private:
    string nome;
    int idade;

public:
    // construtor
    Pessoa(string n, int i) : nome(n), idade(i) {}

    //metodo para calcular a idade em meses
    int calcular_idade() {
        
        return idade * 12;
    }

    //metodo para calcular a idade em 2050
    int calcular_idade_2050() {
        int ano_atual = 2024;
        
        return idade + (2050 - ano_atual);
    }

    // método para exibir os dados da pessoa
    void exibir() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
    }
};

int main() {
    string nome;
    int idade;

    //pedir para usuario inserir dados da pessoa
    cout << "Digite o nome da pessoa: ";
    getline(cin, nome);

    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    // criar um objeto da classe pessoa
    Pessoa pessoa(nome, idade);

    // exibe os dados da pessoa
    pessoa.exibir();

    // calcular e mostrar a idade em meses

    cout << "Idade em meses: " << pessoa.calcular_idade() << endl;

    //calcular idade em 2025
    cout << "Idade em 2050: " << pessoa.calcular_idade_2050() << endl;

    return 0;
}