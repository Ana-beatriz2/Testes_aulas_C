#include <stdio.h>

int main(){

    int numero, contador_par = 0, contador_impar = 0, contador = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("\n%d primeiros numeros pares: ", numero);

    while (contador_par < numero){

        if (contador % 2 == 0){
            printf(" %d ", contador);
            contador_par++;
        }

        contador++;
    }

    printf("\n%d primeiros numeros impares: ", numero);

    contador = 0;

    while (contador_impar < numero){

        if (contador % 2 == 1){
            printf(" %d ", contador);
            contador_impar++;
        }

        contador++;
    }
    printf("\n");

    return 0;
}
