#include <stdio.h>

int main(){

    int numero, contador = 0, contador2, aux = 1, quantidade_divisores = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    while (contador < numero){

        for (contador2 = 1; contador2 <= aux; contador2++){

            if (aux % contador2 == 0){
                quantidade_divisores++;
            }
        }

        if (quantidade_divisores == 2){
            printf(" %d ", aux);
            contador++;
        }

        quantidade_divisores = 0;
        aux++;
    }


    return 0;

}
