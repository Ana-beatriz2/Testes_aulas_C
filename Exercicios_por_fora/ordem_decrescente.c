#include <stdio.h>

/*Faça um Programa que leia três números e mostre-os em ordem
decrescente. */

# Acabei fazendo crescente

int main() {

    int contador, contador2;
    float numero[3], aux;

    for (contador = 0; contador < 3; contador++) {

        printf("Insira o %do numero: ", contador + 1);
        scanf("%f", &numero[contador]);

       for (contador2 = 0; contador2 <  2; contador2++) {

            printf("\nContador = %d, contador2 = %d\n", contador, contador2);

            if (numero[contador] < numero[contador2]) {

                aux = numero[contador2];
                numero[contador2] = numero[contador];
                numero[contador] = aux;

                }
       }

    }



     printf("%f, %f, %f", numero[0], numero[1], numero[2]);


    return 0;

}
