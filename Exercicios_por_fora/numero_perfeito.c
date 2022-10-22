#include <stdio.h>

int main(){

    int numero, soma = 0, contador = 1;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    while (contador < numero){
        if (numero % contador == 0){
            soma += contador;

            printf("%d", contador);
            if (contador <){printf(" + ");}
        }

        contador++;
    }

    if (soma == numero){
        printf("\nO numero %d e perfeito!\n", numero);
    }
    else{
        printf("\nO numero %d nao e perfeito!\n", numero);
    }

    return 0;

}
