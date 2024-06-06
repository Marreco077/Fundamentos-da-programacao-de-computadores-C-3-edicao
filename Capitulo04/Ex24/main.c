/* Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
Calcule e mostre:
 ■ O valor do aumento, usando as regras que se seguem. 
 O valor do imposto, usando as regras a seguir.
94 | Fundamentos da programação de computadores
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
 ■ O novo preço, ou seja, o preço mais aumento menos imposto.
 ■ A classificação, usando as regras a seguir.  */

 #include <stdio.h>
 
 int main(void) {
    float preco, aumento, preco_aumento, imposto, preco_final;
    int categoria;
    char situacao;
     
    printf("Digite o preco do produto: \n");
    scanf("%f", &preco);
    printf("Digite a categoria do produto: [1 a 3]\n");
    scanf("%i", &categoria);
    printf("Digite a situacao do produto: [R ou N]\n");
    scanf(" %c", &situacao);

    if(preco <= 25) { // if para definir preco <= 25
        switch(categoria) { // switch nos casos 1,2,3 menor que 25
            case 1:
                aumento = 5;
                break;
            case 2:
                aumento = 8;
                break;
            case 3:
                aumento = 10;
                break;
        }
    }
    else if(preco > 25) { // else if para definir preco >25
        switch(categoria) { // switch nos casos 1,2,3 maior que 25
            case 1:
                aumento = 15;
                break;
            case 2:
                aumento = 15;
                break;
            case 3:
                aumento = 18;
                break;
        }
    }
    
    preco_aumento = preco * (aumento / 100 + 1); // calcular o preco mais aumento

    if(categoria == 2 || situacao == 'R') { // if para ver se enquadra ou nao no imposto de 5%
        imposto = 0.95; // imposto 5%
    }
    else {
        imposto = 0.92; // imposto 8%
    }

    preco_final = preco_aumento * imposto; // calcular preço final = preco aumento - imposto;
    
    printf("Preco final eh: %.1f\n", preco_final);

    if(preco_final <= 50) {
        printf("Barato\n");
    }
    else if(preco_final < 120) {
        printf("Normal"); 
    }
    else { // preco maior que 120
        printf("Caro pra caralho");
    }

    return 0;
 }