/*Você está desenvolvendo um sistema de controle de combustível para uma frota de carros. Cada
carro é representado por um objeto da classe Carro, que possui características como capacidade
do tanque, consumo de combustível, quantidade atual de combustível e distância percorrida.
A classe Carro também possui métodos para abastecer e mover o carro, atualizando a quantidade de combustível e a distância percorrida, respectivamente.
Sua tarefa é receber informações sobre dois carros e simular o movimento de cada um deles.
Para cada carro, você deve ler o combustível inicial e a distância que será percorrida. Após a
simulação, você deve imprimir a distância total percorrida e a quantidade de combustível restante
para cada carro.
Entrada:
A entrada contém as seguintes informações:
Um número inteiro representando o combustível inicial do Carro 1.
Um número inteiro representando o combustível inicial do Carro 2.
Um número inteiro representando a distância que o Carro 1 irá percorrer.
Um número inteiro representando a distância que o Carro 2 irá percorrer.
Considere que as capacidades dos tanques dos carros são 50 litros e que o consumo de combustível é o mesmo para ambos, 15 km/l.*/


#include <iostream>
using namespace std;

class Carro {

private:
    int capacidade_tanque;
    int consumo_combustivel; // km por litro
    int quantidade_atual; // em litros
    int distancia_percorrida; // em km

public:
    Carro() : capacidade_tanque(50), consumo_combustivel(15), quantidade_atual(0), distancia_percorrida(0) {}

    void abastecer(int combustivel) {
        quantidade_atual += combustivel;
        if (quantidade_atual > capacidade_tanque) {
            quantidade_atual = capacidade_tanque;
        }
    }

    void mover(int distancia) {
        int consumo_necessario = distancia / consumo_combustivel;
        if (consumo_necessario <= quantidade_atual) {
            distancia_percorrida += distancia;
            quantidade_atual -= consumo_necessario;
        } else {
            // Se não houver combustível suficiente para percorrer toda a distância
            distancia_percorrida += quantidade_atual * consumo_combustivel;
            quantidade_atual = 0;
        }
    }

    int getQuantidade_atual() const {
        return quantidade_atual;
    }

    int getDistancia_percorrida() const {
        return distancia_percorrida;
    }
};

int main() {
    int combustivel_inicial1, combustivel_inicial2;
    int distancia1, distancia2;

    cout << "Digite o combustivel inicial do Carro 1: ";
    cin >> combustivel_inicial1;
    cout << "Digite o combustivel inicial do Carro 2: ";
    cin >> combustivel_inicial2;
    cout << "Digite a distancia que o Carro 1 ira percorrer: ";
    cin >> distancia1;
    cout << "Digite a distancia que o Carro 2 ira percorrer: ";
    cin >> distancia2;

    Carro carro1, carro2;
    carro1.abastecer(combustivel_inicial1);
    carro2.abastecer(combustivel_inicial2);

    carro1.mover(distancia1);
    carro2.mover(distancia2);

    cout << "\nResultados:\n";
    cout << "Carro 1 - Distancia Percorrida: " << carro1.getDistancia_percorrida() << " km, Combustivel Restante: " << carro1.getQuantidade_atual() << " litros\n";
    cout << "Carro 2 - Distancia Percorrida: " << carro2.getDistancia_percorrida() << " km, Combustivel Restante: " << carro2.getQuantidade_atual() << " litros\n";

    return 0;
}
