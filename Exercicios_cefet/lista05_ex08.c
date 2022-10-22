#include <stdio.h>

int main(){

    int numero;
    long int soma = 0;

    do {

        printf("Insira um numero (zero para parar): ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero != 0);

    printf("\nSoma dos valores inseridos: %ld\n", soma);

    return 0;

}
