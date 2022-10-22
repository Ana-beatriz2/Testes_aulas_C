#include <stdio.h>

int main() {

    float numero;

    printf("Insira um numero: ");
    scanf("%f", &numero);

    printf("\n1/4 de %.2f: %.2f\n", numero, numero / 4);

    return 0;

}
