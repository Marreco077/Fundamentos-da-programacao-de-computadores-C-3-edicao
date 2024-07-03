/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
 ■ a quantidade de pessoas com idade superior a 50 anos;
 ■ a média das alturas das pessoas com idade entre 10 e 20 anos;
 ■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.*/

 #include <iostream>
 
 using namespace std;
 
 int main() {
    int idade, contador_idade = 0, contador_altura = 0, contador_peso = 0;
    float peso, altura, media_altura = 0, porcentagem_peso = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Digite a idade da pessoa " << i+1 << ":" << endl;
        cin >> idade;
        cout << "Digite o peso da pessoa " << i+1 << ":" << endl;
        cin >> peso;
        cout << "Digite a altura da pessoa " << i+1 << ":" << endl;
        cin >> altura;

        if(idade > 50) {
            contador_idade++;
        }
        if(idade >= 10 && idade <= 20) {
            contador_altura++;
            media_altura += altura;
        }
        if(peso < 40) {
            contador_peso++;
        }
    }

    media_altura /= contador_altura;
    porcentagem_peso = (contador_peso / 5.0) * 100.0;

    cout << "Quantidade de pessoas com idade acima de 50 anos: " << contador_idade << endl;
    cout << "Media das alturas das pessoas com idade entre 10 e 20 anos: " << media_altura << endl;
    cout << "Porcentagem de pessoas com peso inferior a 40kg entre todas as pessoas analisadas: " << porcentagem_peso << endl;    
    
    return 0;
 }