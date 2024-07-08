/* Defina uma classe CARRO com os seguintes atributos: placa e ano de fabricação. Essa classe deve ter também
um método para calcular o imposto.
Faça o cadastro de cinco carros, calcule e mostre:
a) o imposto a ser pago por cada carro, sabendo-se que o cálculo é realizado assim:
No ano de fabricação, o carro paga R$ 500,00 de imposto. A cada ano de uso, o imposto é reduzido
em R$ 100,00. Contudo, o valor mínimo a ser pago pelo carro é de R$ 100,00 até o carro atingir o 10o
ano de uso, quando, então, não precisará mais pagar imposto. As tabelas a seguir mostram exemplos
de dois carros, um fabricado em 2012 e outro fabricado em 2009. Supondo que o ano atual é 2012,
estão dispostos o valor dos impostos a serem pagos até 2021.
Para cálculo do imposto, o usuário deverá informar o ano atual.
b) o total dos impostos, ou seja, a soma dos impostos de todos os carros (outro método).
c) a quantidade de carros que não pagam impostos (outro método).*/


#include <iostream>

using namespace std;

class Carro
{
    private:
        int placa;
        int ano_fabricacao;
        float imposto;

    public:
        Carro() : placa(0), ano_fabricacao(0), imposto(0.0) {}
        Carro(int p, int af) : placa(p), ano_fabricacao(af), imposto(0.0) {}

        void setPlaca(int p) { placa = p; }
        void setAno_fabricacao(int a) { ano_fabricacao = a; }
        void setImposto(float i) { imposto = i; }

        int getPlaca() const { return placa; }
        int getAno_fabricacao() const { return ano_fabricacao; }
        float getImposto() const { return imposto; }

        void Calcula_imposto(int ano_atual) {
            if(ano_atual - ano_fabricacao >= 10) {
                imposto = 0;
            } else if(ano_atual - ano_fabricacao >= 4) {
                imposto = 100;
            } else {
                imposto = 500 - ((ano_atual - ano_fabricacao) * 100);
            }
        }

        void Exibe_carros() {
            cout << "Placa: " << getPlaca() << endl;
            cout << "Imposto: " << getImposto() << endl;
        }
};

float calculaImpostoTotal(Carro carros[], int tamanho) {
    float total = 0;
    for(int i = 0; i < tamanho; i++) {
        total += carros[i].getImposto();
    }
    return total;
}

int contaCarrosIsentos(Carro carros[], int tamanho) {
    int contador = 0;
    for(int i = 0; i < tamanho; i++) {
        if(carros[i].getImposto() == 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int placa;
    int ano_fabricado;
    int ano_atual;

    cout << "Digite o ano atual: " << endl;
    cin >> ano_atual;

    Carro carro[5];

    for(int i = 0; i < 5; i++) {
        cout << "Digite a placa do carro " << i+1 << endl;
        cin >> placa;
        cout << "Digite o ano de fabricacao do carro " << i+1 << endl;
        cin >> ano_fabricado;
        
        carro[i] = Carro(placa, ano_fabricado);
        carro[i].Calcula_imposto(ano_atual);
    }

    for(int i = 0; i < 5; i++) {
        carro[i].Exibe_carros();
        cout << endl;
    }

    float impostoTotal = calculaImpostoTotal(carro, 5);
    int carrosIsentos = contaCarrosIsentos(carro, 5);

    cout << "Imposto total: " << impostoTotal << endl;
    cout << "Quantidade de carros que nao pagam imposto: " << carrosIsentos << endl;

    return 0;
}
