#include <stdio.h>

// Fazer um programa para ler todos os numeros pares entre 1 e 100, mostrando na tela

int main() {

    int contador;

    printf("\nNumeros pares entre 1 e 100: ");

    for (contador = 1; contador <= 100; contador++) {

        if (contador % 2 == 0) {
            printf("%d\n", contador);
        }

    }

    return 0;

}
