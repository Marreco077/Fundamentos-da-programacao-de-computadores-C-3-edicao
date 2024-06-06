// Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
// programa deve mostrar uma mensagem de permissão de acesso ou não

#include <stdio.h>

int main(void) {
    int senha;

    printf("Digite a senha: ");
    scanf("%i", &senha);

    if(senha == 4531) {
        printf("Acesso permitido!");
    }
    else {
        printf("Acesso negado!");
    }
    return 0;
}
