#include <stdio.h>

// Questão 5


int main() {

    int numero = 0, soma_par = 0, soma_impar = 0;

    while (numero <= 1000) {

        if (numero % 2 == 0) {

            soma_par += numero;

        }

        else {

            soma_impar += numero;

        }

        printf("Insira um numero inteiro positivo (digite um maior do que 1000 para encerrar): ");
        scanf("%d", &numero);

    }

    printf("\nSoma dos numero pares digitados: %d\nSoma dos numeros impares digitados: %d\n", soma_par, soma_impar);

    return 0;


    }



