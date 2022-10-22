#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    printf("\nAntecessor: %d\nSucessor: %d\n", numero - 1, numero + 1);

    return 0;

}
