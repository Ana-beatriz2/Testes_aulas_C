#include <stdio.h>

// Questão 6

int main() {

    float peso, altura, imc;

    printf("========================================");
    printf("\n          CALCULADORA DE IMC          ");
    printf("\n========================================\n");

    printf("\nInsira seu peso: ");
    scanf("%f", &peso);

    printf("\nInsira sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC: %.1f\nResultado: ", imc);

    if (imc <= 18.5) {

        printf("Abaixo do peso normal.\n");

    }

    else if ((imc > 18.5) && ( imc <= 25)) {

        printf("Peso normal.\n");

    }

    else if ((imc > 25) && (imc <= 30)) {

        printf("Peso acima do normal.\n");

    }

    else {

        printf("Peso excessivo.\n");

    }

    return 0;

}
