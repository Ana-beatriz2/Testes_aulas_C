#include <stdio.h>

int main(){

    int numero, aux = 1, cont = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("\n%d primeiros numeros pares:\n", numero);

    while (cont < numero){

        if (aux % 2 == 0){
            printf(" %d ", aux);
            cont++;
        }

        aux++;
    }

    aux = 1;
    cont = 0;

    printf("\n%d primeiros numeros impares:\n", numero);

    while (cont < numero){

        if (aux % 2 != 0){
            printf(" %d ", aux);
            cont++;
        }

        aux++;
    }



    return 0;
}
