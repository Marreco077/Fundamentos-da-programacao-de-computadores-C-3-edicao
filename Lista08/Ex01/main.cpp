/*Você está desenvolvendo um programa para armazenar e exibir dados pessoais. Cada pessoa é
representada por um objeto da classe Pessoa, que possui atributos como nome, idade e altura.
Seu programa deve ser capaz de receber um número inteiro N e, em seguida, ler os dados de N
pessoas. Após a leitura, deve imprimir os dados de cada pessoa.*/

#include <iostream>
#include <string>

using namespace std;

class Pessoa {

private:
    string nome;
    int idade;
    float altura;

public:
    Pessoa() {} // construtor vazio para usar vetor
    // construtor
    Pessoa(string n, int i, float a) : nome(n), idade(i), altura(a) {};

    //metodo para definir e obter os atributos
    void setNome(string n) { nome = n; }
    void setIdade(int i) { idade = i; } 
    void setAltura(float a) { altura = a; }
    
    string getNome() const { return nome;}
    int getIdade() const { return idade; }
    float getAltura() const { return altura; }

};

int main() {
    int n;
    string nome;
    int idade;
    float altura;

    cout << "Digite o numero de pessoas: " << endl;
    cin >> n;

    Pessoa pessoa[n];

    for(int i = 0; i < n; i++) {
        cout << "Digite o nome da pessoa " << i+1 << endl;
        cin.ignore(); // limpa buffer
        getline(cin, nome);
        cout << "Digite a idade da pessoa " << i+1 <<endl;
        cin >> idade;
        cout << "Digite a altura da pessoa " << i+1 << endl;
        cin >> altura;

        pessoa[i] = Pessoa(nome, idade, altura);
    }

     for (int i = 0; i < n; ++i) {
        cout << "Pessoa " << i+1 << ":\n";
        cout << "Nome: " << pessoa[i].getNome() << endl;
        cout << "Idade: " << pessoa[i].getIdade() << " anos" << endl;
        cout << "Altura: " << pessoa[i].getAltura() << " metros" << endl << endl;
    }
    
    return 0;
}