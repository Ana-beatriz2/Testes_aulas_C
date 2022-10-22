#include <stdio.h>

int main(){

    float numerador = 1, denominador, soma = 0;


    for (denominador = 1; denominador <= 50; denominador++){

        printf("%.0f/%.0f", numerador, denominador);
        if (denominador < 50){printf(" + ");}

        soma += (numerador/denominador);

        numerador += 2;
    }

    printf(" = %f", soma);

    return 0;
}
