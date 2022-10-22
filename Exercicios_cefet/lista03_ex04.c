#include <stdio.h>

// Questão 4

int main(){

    float massa_inicial, massa_final;
    int tempo = 0, tempo_horas = 0, tempo_minutos = 0, tempo_segundos = 0;

    printf("Insira a massa (em gramas) do material radioativo: ");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;

    while (massa_final > 0.5) {

        massa_final = massa_final / 2;
        tempo += 50;

    }

    tempo_horas = tempo / 3600;
    tempo_minutos = (tempo % 3600) / 60;
    tempo_segundos = (tempo % 3600) % 60;

    printf("\nMassa Inicial: %.2fg\nMassa final: %.2fg\nTempo total: %dh%dm%ds\n", massa_inicial, massa_final, tempo_horas, tempo_minutos, tempo_segundos);

    return 0;
}
