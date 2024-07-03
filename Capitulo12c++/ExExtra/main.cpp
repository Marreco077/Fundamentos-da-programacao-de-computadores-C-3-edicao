/*Defina uma classe Veiculo com os seguintes atributos: marca, modelo e ano. Esta classe deve ter métodos para:

Calcular e mostrar a idade do veículo em anos.
Mostrar os detalhes completos do veículo, incluindo marca, modelo e ano.
Crie um programa em C++ que permita ao usuário inserir os dados de um veículo e, em seguida, exibir:

A idade do veículo em anos.
Todos os detalhes do veículo fornecidos.*/

#include <iostream>
#include <string>

using namespace std;

class Veiculo {

private:
    string marca;
    string modelo;
    int ano;

public:
    //contrutor
    Veiculo(string ma, string mo, int a) : marca(ma), modelo(mo), ano(a) {}

    //metodo para calcular e mostrar a idade do veiculo em anos
    int calcular_ano() {
        return 2024 - ano; // ano atual
    }

    void exibir() {
        cout << endl;
        cout << "Marca do carro: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Idade do veiculo: " << calcular_ano() << " anos" <<endl;
    }
};

int main() {
    string marca, modelo;
    int ano;

    cout << "Digite a marca do carro: " << endl;
    getline(cin, marca);
    cout << "Digite o modelo do carro: " << endl;
    getline(cin, modelo);
    cout << "Digite o ano do carro: " << endl;
    cin >> ano;

    Veiculo veiculo(marca, modelo, ano);

    veiculo.exibir();
    
    return 0;
}