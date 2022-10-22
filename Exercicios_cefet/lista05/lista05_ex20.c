#include <stdio.h>

int main(){

    int numero, contador = 0, aux, contador2 = 1, quantidade_divisores = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("\n%d primeiros numeros primos: ", numero);

    while (contador < numero){

        for (aux = 1; aux <= contador2; aux++){
            if (contador2 % aux == 0){
                quantidade_divisores += 1;
            }
        }

        if (quantidade_divisores == 2){
            contador++;
            printf(" %d ", contador2);
        }

        contador2++;
        quantidade_divisores = 0;
    }

    return 0;
}
