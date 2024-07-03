/*Você está desenvolvendo um sistema de biblioteca. Crie duas classes: Autor e Livro. A classe
Autor deve armazenar o nome do autor, e a classe Livro deve conter informações sobre o título,
ano de publicação e um ponteiro para um objeto da classe Autor.
Escreva um programa principal (main) que solicita ao usuário informações sobre um autor e um
livro. Em seguida, imprima os detalhes do livro, incluindo o título, ano de publicação e nome do
autor.
*/

#include <iostream>

using namespace std;

class Autor {

private:  
    string nome;

public:
    // construtor
    Autor(string n) : nome(n) {};

    void setNome(string n) { nome = n; }

    string getNome() const { return nome;}
};

class Livro {
private:
    string titulo;
    int ano;

public:
    //construtor
    Livro(string t, int a) : titulo(t), ano(a) {};

    void setTitulo(string t) { titulo = t;}
    void setAno(int a) { ano = a;}

    string getTitulo() const { return titulo;}
    int getAno() const { return ano;}
};

int main() {
    string nome;
    string titulo;
    int ano;

    cout << "Digite o nome do autor: " << endl;
    getline(cin, nome);
    cout << "Digite o titulo do livro: " << endl;
    getline(cin, titulo);
    cout << "Digite o ano do livro" << endl;
    cin >> ano;

    Autor autor(nome);
    Livro livro(titulo, ano);

    cout << "Detalhes do Livro:" << endl;
    cout << "Titulo: " << livro.getTitulo() << endl;
    cout << "Ano de Publicacao: " << livro.getAno() << endl;
    cout << "Autor: " << autor.getNome() << endl;


    return 0;
}