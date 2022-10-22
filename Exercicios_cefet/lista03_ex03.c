#include <stdio.h>

// Questão 3

int main() {

    float numero = 1, produto = 1;


    while (numero != 0) {

        produto *= numero;

        printf("Insira um numero (0 para encerrar): ");
        scanf("%f", &numero);

    }

    printf("\nProduto dos numeros digitados: %.2f\n", produto);

}
