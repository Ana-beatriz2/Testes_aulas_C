#include <stdio.h>


int main(){

    float numerador = 1, denomindor = 1, soma = 0;

    while (numerador <= 99 && denomindor <= 50){

        soma += (numerador / denomindor);

        numerador += 2;
        denomindor++;

    }

    printf("Soma: %f", soma);

    return 0;
}
