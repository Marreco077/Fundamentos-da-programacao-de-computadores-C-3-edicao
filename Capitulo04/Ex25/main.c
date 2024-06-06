/*Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))
*/

#include <stdio.h>

int main(void) {
    float horas_extras, horas_faltas, gratificacao, premio;

    printf("Digite o total de horas extras: \n");
    scanf("%f", &horas_extras);
    printf("Digite o total de horas faltadas: \n");
    scanf("%f", &horas_faltas);

    gratificacao = horas_extras - (2.0/3.0 * (horas_faltas));

    if(gratificacao >= 2400) {
        premio = 500;
    }
    else if(gratificacao >= 1800) {
        premio = 400;
    }
    else if(gratificacao >= 1200) {
        premio = 300;
    }
    else if(gratificacao >= 600) {
        premio = 200;
    }
    else {
        premio = 100;
    }

    printf("O valor do premio eh de: %.1f", premio);

    return 0;
}