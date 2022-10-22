#include <stdio.h>

int main(){

    int numero = 0, soma_par = 0, soma_impar = 0;

    do{

        if (numero % 2 == 0){
            soma_par += numero;
        }
        else{
            soma_impar += numero;
        }

        printf("Insira um numero [maior do que 1000 para encerrar]: ");
        scanf("%d", &numero);

    } while (numero <= 1000);

    printf("\nSoma dos numero pares inseridos: %d\nSoma dos numeros impares inseridos: %d\n", soma_par, soma_impar);

    return 0;
}
