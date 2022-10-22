#include <stdio.h>

int main(){

    float numero1, numero2, numero3, soma, produto, media;

    printf("\n\t\t\t==========================================\n\t\t\tINSTRUCAO ACERCA DA UTILIZACAO DO PROGRAMA\n\t\t\t==========================================\n");
    printf("\n- Caso os tres valores do conjunto nao estejam em ordem crescente, o programa sera encerrado.\n");

    printf("\nInsira o primeiro valor: ");
    scanf("%f", &numero1);

    printf("Insira o segundo valor: ");
    scanf("%f", &numero2);

    printf("Insira o terceiro valor: ");
    scanf("%f", &numero3);

    while (numero1 < numero2 && numero2 < numero3){

        soma = numero1 + numero2 + numero3;

        printf("\nSoma: %.2f", soma);
        printf("\nProduto: %.2f", numero1 * numero2 * numero3);
        printf("\nMedia: %.2f\n", soma / 3);

        printf("\nInsira o primeiro valor: ");
        scanf("%f", &numero1);

        printf("Insira o segundo valor: ");
        scanf("%f", &numero2);

        printf("Insira o terceiro valor: ");
        scanf("%f", &numero3);

    }

    return 0;
}
