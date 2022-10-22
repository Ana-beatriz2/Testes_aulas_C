#include <stdio.h>

int main(){

    float numero = 0, soma = 0;

    while (soma < 100){

        printf("Insira um valor: ");
        scanf("%f", &numero);

        soma += numero;
    }

    printf("%f", soma);

    return 0;
}
