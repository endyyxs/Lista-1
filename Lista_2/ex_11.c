#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio_hora, inicio_min, final_hora, final_min, dur_hora, dur_min, horainicial_total, horafinal_total, dur_total;

    printf("Digite a hora de início do jogo (hora minuto): ");
    scanf("%d %d", &inicio_hora, &inicio_min);

    printf("Digite a hora de término do jogo (hora minuto): ");
    scanf("%d %d", &final_hora, &final_min);

    horainicial_total = inicio_hora * 60 + inicio_min;
    horafinal_total = final_hora * 60 + final_min;

    if (horafinal_total < horainicial_total) {
        horafinal_total += 24 * 60; 
    }

    dur_total = horafinal_total - horainicial_total;
    dur_hora = dur_total / 60;
    dur_min = dur_total % 60;

    printf("Duração do jogo: %d horas e %d minutos\n", dur_hora, dur_min);

    return 0;
}
