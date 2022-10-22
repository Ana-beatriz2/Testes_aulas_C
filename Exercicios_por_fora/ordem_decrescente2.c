#include <stdio.h>

/*Faça um Programa que leia três números e mostre-os em ordem
decrescente.*/

int main() {

    int contador;
    float numero[3], maior, menor, meio;

    for (contador = 0; contador < 3; contador++) {

        printf("Insira o %do numero: ", contador + 1);
        scanf("%f", &numero[contador]);

        if (contador == 0) {

            maior = numero[contador];
            menor = numero[contador];

        }

        else {

            if (numero[contador] > maior) {

                maior = numero[contador];

            }

            if (numero[contador] < menor) {

                menor = numero[contador];

            }

        }

    }

    for (contador = 0; contador < 3; contador++) {


        if (numero[contador] != menor && numero[contador] != maior) {

            meio = numero[contador];
        }

    }

    printf("\nNumeros inseridos em ordem decrescente: %.1f, %.1f, %.1f\n", maior, meio, menor);

    return 0;


}
