#include <stdio.h>

// Questão 2

int main() {

    float lado1, lado2, lado3, max, aux1, aux2;

    printf("Informe a medida do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Informe a medida do segundo lado: ");
    scanf("%f", &lado2);

    printf("Informe a medida do terceiro lado: ");
    scanf("%f", &lado3);



    if (lado2 > lado3 && lado2 > lado1) {

        max = lado2;
        aux1 = lado1;
        aux2 = lado3;

    }

    else if (lado3 > lado2 && lado3 > lado1) {

        max = lado3;
        aux1 = lado1;
        aux2 = lado2;

    }

    else {

        max = lado1;
        aux1 = lado2;
        aux2 = lado3;

    }


    if  ((max * max) == (aux1 * aux1) + (aux2 * aux2)) {

        printf("\nEssas medidas formam um triangulo retangulo.\n");

    }

    else if ((lado2 + lado3 > lado1) && (lado2 + lado1 > lado3) && (lado1 + lado3 > lado2)) {

        printf("\nEssas medidas formam um triangulo! Porem, nao um triangulo retangulo.\n");

    }

    else {

        printf("\nEssas medidas nao formam um triangulo.\n");

    }

    return 0;

}
