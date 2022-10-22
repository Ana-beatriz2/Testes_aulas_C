#include <stdio.h>

// Questão 7

int main() {

    int A, B, aux;

    printf("Insira um valor para A: ");
    scanf("%d", &A);

    printf("Insira um valor para B: ");
    scanf("%d", &B);

    printf("\nVariaveis com seus valores iniciais: A= %d, B= %d", A, B);

    // Realização da troca

    aux = A;
    A = B;
    B = aux;

    // Resultado final

    printf("\nVariaveis com seus valores trocados: A= %d, B= %d\n", A, B);

    return 0;

}
