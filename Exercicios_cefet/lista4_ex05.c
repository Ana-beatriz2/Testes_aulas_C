#include <stdio.h>

int main(){

    int vetor[100], numero = 0, i = 0, aux = 0;

    printf("Insira um valor [999 para parar]: ");
    scanf("%d", &numero);

    while (numero != 999){

        vetor[i] = numero;
        i++;

        printf("Insira um valor [999 para parar]: ");
        scanf("%d", &numero);
    }

    printf("\nNumeros inseridos: ");

    for (aux = i - 1; aux >= 0; aux--){

        printf(" %d ", vetor[aux]);
    }

    return 0;
}
