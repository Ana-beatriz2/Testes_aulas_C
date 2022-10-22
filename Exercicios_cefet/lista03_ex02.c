#include <stdio.h>

// Questão 2

int main() {

    int contador = 1, contador2;

    while (contador < 11) {

            printf("=================");

            printf("\nTabuada de %d:\n", contador);

        for (contador2 = 1; contador2 < 11; contador2++) {

            printf("\n %d x %d = %d", contador, contador2, contador * contador2);

        }

        printf("\n");

        contador++;
    }

    return 0;
}
