#include <stdio.h>

int main(){

    float numero1, numero2, numero3, soma = 0;

    printf("\n=====================================\nInsira o primeiro valor: ");
    scanf("%f", &numero1);

    printf("Insira o segundo valor: ");
    scanf("%f", &numero2);

    printf("Insira o terceiro valor: ");
    scanf("%f", &numero3);

    while (numero1 < numero2 && numero2 < numero3){

        soma = numero1 + numero2 + numero3;

        printf("\nSoma: %.1f", soma);
        printf("\nProduto: %.1f", numero1 * numero2 * numero3);
        printf("\nMedia: %.1f", soma / 3);

        printf("\n=====================================\nInsira o primeiro valor: ");
        scanf("%f", &numero1);

        printf("Insira o segundo valor: ");
        scanf("%f", &numero2);

        printf("Insira o terceiro valor: ");
        scanf("%f", &numero3);

    }

    return 0;

}
