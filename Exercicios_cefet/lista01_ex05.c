#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "");

    float numero1, numero2, produto, divisao;

    printf("Insira o primeiro número: ");
    scanf("%f", &numero1);

    printf("Insira o segundo número: ");
    scanf("%f", &numero2);

    divisao = numero1 / numero2;

    produto = numero1 * numero2;

    printf("\n%.0f + %.0f: %.0f\n%.0f - %.0f: %.0f\n", numero1, numero2, numero1 + numero2, numero1, numero2, numero1 - numero2);

    printf("%.0f / %.0f: %.2f\n%.0f x %.0f: %.2f\n", numero1, numero2, divisao, numero1, numero2, produto);

    return 0;
}
