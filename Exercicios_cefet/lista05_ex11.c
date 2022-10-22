#include <stdio.h>

int main(){

    int numero = 1;
    long int produto = 1;

    do {

        produto *= numero;

        printf("Insira um numero: ");
        scanf("%d", &numero);

    } while (numero != 0);

    printf("\nProduto dos numeros digitados: %ld\n", produto);

    return 0;

}
