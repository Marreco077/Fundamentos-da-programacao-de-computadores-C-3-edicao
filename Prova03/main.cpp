/*Foi realizada uma pesquisa de algumas características de 10 pessoas. Para cada objeto do tipo PESSOA
devem ser definidos os seguintes campos/tipos: sexo (char), altura (double) e idade (int) (04%
pontos). Implemente dois construtores (um sem parâmetros e o outro com todos os parâmetros) (08%
pontos), os métodos get/set e o método exibir. Os construtores devem realizar a inicialização dos
atributos da classe; os métodos get devem apenas retornar o conteúdo dos respectivos atributos; o
método exibir deve exibir na tela o conteúdo de cada atributo acionando os métodos get respectivos e
os métodos set devem validar as seguintes regras: sexo ‘F’ ou ‘M’, altura e idade positivas.
Implemente também os seguintes módulos para manipulação desses objetos:
• um procedimento que receba um vetor de pessoas e o nome de um arquivo, preencha os dados
de cada uma elemento do vetor a partir das informações informadas no arquivo indicado pelo
nome recebido por parâmetro;
• uma função que receba um vetor de pessoas, calcule e retorne a média de idade daquelas com
mais de 18 anos e altura superior a 1,60 m.
No programa principal, declare um vetor de 10 pessoas, leia o nome do arquivo de entrada da informação
e o nome do arquivo de saída, acione o procedimento e a função, gravando no arquivo de saída o
resultado da função.*/

#include <iostream>

using namespace std;

class Pessoa {
private:
    char sexo;
    double altura;
    int idade;

public:
    Pessoa() {} // construtor vazio

    Pessoa(char s, double a, int i) : sexo(s), altura(a), idade(i) {}

    void setSexo(char s) {
        if (s == 'M' || s == 'F') {
            sexo = s;
        } else {
            cout << "Erro: Sexo invalido. Use 'M' ou 'F'." << endl;
        }
    }

    void setAltura(double a) { altura = a; }
    void setIdade(int i) { idade = i; }

    char getSexo() const { return sexo; }
    double getAltura() const { return altura; }
    int getIdade() const { return idade; }

    void Exibir() const {
        cout << "Sexo: " << getSexo() << endl;
        cout << "Altura: " << getAltura() << " metros" << endl;
        cout << "Idade: " << getIdade() << " anos" << endl;
    }
};

int main() {
    char sexo;
    double altura;
    int idade;

    Pessoa pessoa[10];

    for(int i = 0; i < 10; i++) {
        cout << "Digite o sexo[M/F] da pessoa: " << i+1 << endl;
        cin >> sexo;
        cout << "Digite a altura da pessoa: " << i+1 << endl;
        cin >> altura;
        cout << "Digite a idade da pessoa: " << i+1 << endl;
        cin >> idade;

        pessoa[i] = Pessoa(sexo, altura, idade);
        cout << endl;
    }

    // Exibindo os dados inseridos
    cout << endl;
    cout << "Dados das pessoas cadastradas:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "Pessoa " << i+1 << ":\n";
        pessoa[i].Exibir();
        cout << endl;
    }

    return 0;
}

