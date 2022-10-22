#include <stdio.h>

// Questão 1

int main() {

    int contador;
    float numero, maior, menor;

    for (contador = 0; contador <= 14; contador++) {

        printf("\nInsira o %do numero: ", contador+1);
        scanf("%f", &numero);

        if (contador == 1) {

            maior = numero;
            menor = numero;
        }

        else {

            if (numero > maior) {

                maior = numero;
            }

            if (numero < menor) {

                menor = numero;

            }
        }

    }

    printf("\nMaior valor inserido: %.2f \nMenor valor inserido: %.2f\n", maior, menor);

    return 0;
}
