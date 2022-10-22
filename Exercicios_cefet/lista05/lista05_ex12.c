#include <stdio.h>

int main(){

    int numero, contador, soma = 0;

    printf("Insira um numero: ");
    scanf(" %d", &numero);

    for (contador = 0; contador < numero; contador++){

        if (numero % contador == 0){

            printf(" %d ", contador);
            if (contador < numero){printf(" + ");}


            soma += contador;
        }

    }

    printf(" = %d", soma);

    if (soma == numero){
        printf("\nO numero %d e perfeito!\n", numero);
    }
    else{
        printf("\nO numero %d nao e perfeito!\n", numero);
    }

    return 0;

}
