#include <stdio.h>

int main(){

    float massa_inicial, massa_final;
    int tempo = 0, tempo_horas = 0, tempo_minutos = 0, tempo_segundos = 0;

    printf("Insira a massa do material radioativo (g): ");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;

    while (massa_final >= 0.5){

        massa_final /= 2;
        tempo += 50;

    }

    tempo_horas = tempo / 3600;
    tempo_minutos = (tempo % 3600) / 60;
    tempo_segundos = (tempo % 3600) % 60;

    printf("\nMassa inicial: %.2f. Massa final: %.2f\n", massa_inicial, massa_final);
    printf("Tempo necessario para a massa ser menor do que 0.5: %dh%dm%ds\n", tempo_horas, tempo_minutos, tempo_segundos);

    return 0;

}
