#include <stdio.h>


int main(){

    int numero;

    printf("Insira um numero entre 1000 e 1999 [0 para parar]: ");
    scanf("%d", &numero);


    while (numero != 0){

        while (numero < 1000 || numero > 1999){

            printf("\nErro! Por favor, insira um numero entre 1000 e 1999 [0 para parar]: ");
            scanf("%d", &numero);

        }

        if (numero % 2 == 0){
            printf("\nO resto da divisao %d por 11 resulta em 5!\n", numero);
        }
        else{
            printf("\nO resto da divisao %d por 11 nao resulta em 5!\n", numero);
        }

        printf("\nInsira um numero entre 1000 e 1999 [0 para parar]: ");
        scanf("%d", &numero);

    }

    return 0;

}
