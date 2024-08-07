/*Defina uma classe denominada PRODUTO com os seguintes atributos: número do produto e preço do produto.
 Essa classe deve possuir, também, um método para calcular o valor do desconto, ou seja, produtos com
preço superior a R$ 100,00 possuem desconto de 15% e os demais produtos têm desconto de 5%.
Defina uma classe CLIENTE com os seguintes atributos: número do cliente, nome do cliente e sexo do
cliente. Essa classe deve possuir, também, um método para calcular o desconto adicional, ou seja, clientes
do sexo feminino (F ou f) têm um desconto adicional de 5% sobre o preço do produto e os demais clientes
(M ou m) não possuem esse desconto.
Defina uma classe denominada COMPRA com os seguintes atributos: número do produto, número
do cliente, quantidade e valor total. Essa classe deve possuir ainda um método para calcular o valor total,
ou seja, a quantidade multiplicada pelo preço final. O preço final é o preço do produto menos o desconto
adicional, quando este existe.
Faça um programa que carregue três produtos validando apenas o preço para que este esteja entre R$
20,00 e R$ 350,00. Carregue três clientes validando para que o sexo seja M, m, F ou f. E, por fim, carregue
uma compra digitando um número do produto, um número do cliente e a quantidade comprada do produto
e calculando o valor total (método da classe COMPRA). Suponha sempre a digitação de dados válidos.*/

#include <iostream>

using namespace std;


class Produto {

private:
    int numero_produto;
    float preco;

public:
    // construtor
    Produto(int np, float p) : numero_produto(np), preco(p) {}

    float desconto_produto() {
        if(preco >= 100) {
            return preco *= 0.85;
        }
        else {
            return preco *= 0.95;
        }
    }
};

class Cliente {

private:
    int numero_cliente;
    string nome;
    char sexo;

public:
    // construtor
    Cliente(int nc, string no, char s) : numero_cliente(nc), nome(no), sexo(s) {}

    float desconto_cliente() {
        if(sexo == 'f' || sexo == 'F') {
            
        }
    }
}



int main() {
    
    return 0;
}