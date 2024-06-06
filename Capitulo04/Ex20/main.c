/* Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
 Para idade inferior a 5, deverá mostrar mensagem */
 
 #include <stdio.h>
 
 int main(void) {
     int idade;

     printf("Digite a idade do pequeno michael phelps: ");
     scanf("%i", &idade);

     if(idade < 5) {
        printf("PROIBIDO NADAR");
        return 0;
     }
     else if(idade <= 7) {
        printf("Infantil");
     }
     else if(idade <= 10) {
        printf("Juvenil");
     }
     else if(idade <= 15) {
        printf("Adolescente");
     }
     else if(idade <= 30) {
        printf("Adulto");
     }
     else {
        printf("Senior");
     }
     return 0;
 }