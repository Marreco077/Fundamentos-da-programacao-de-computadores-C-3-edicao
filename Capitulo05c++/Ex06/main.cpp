/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
 ■ o valor total das compras à vista;
 ■ o valor total das compras a prazo;
 ■ o valor total das compras efetuadas; e
 ■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.*/

 #include <iostream>
 
 using namespace std;
 
 int main() {
    char codigo;
    float valor, valor_vista = 0, valor_prazo = 0, valor_total = 0, valor_primeiro;

    for(int i = 0; i < 15; i++) {
        cout << "Digite se o valor eh a prazo ou a vista: " << endl;
        cin >> codigo;
        cout << "Digite o valor do produto: " << endl;
        cin >> valor;

        if(codigo == 'v') {
            valor_vista += valor;
        }
        else if(codigo == 'p') {
            valor_prazo += valor;
        }

        valor_total += valor;
     }

    valor_primeiro = valor_prazo / 3.0;

    cout << "Valor total compras a vista: " << valor_vista << endl;
    cout << "Valor total compras a prazo: " << valor_prazo << endl;
    cout << "Valor total: " << valor_total << endl;
    cout << "Valor da primeira prestacao compras a prazo: " << valor_primeiro << endl;
    
    return 0;
 }