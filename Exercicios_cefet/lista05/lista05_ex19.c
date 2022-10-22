#include <stdio.h>

int main(){

    int numero, contador = 1, quantidade_divisoes = 0;

    printf("\nInsira um numero: ");
    scanf("%d", &numero);

    printf("\n");

    while (contador <= numero){

        if (numero % contador == 0){
            quantidade_divisoes++;
            printf(" |%d| ", contador);
        }
        else{
            printf(" %d ", contador);
        }

        contador++;

    }

    printf("\n");

    // Os valores que sao divisores do numero inserido irão aparecer entre ||

    if (quantidade_divisoes == 2){
        printf("\nO numero %d e primo!\n", numero);
    }
    else{
        printf("\nO numero %d nao e primo!\n", numero);
    }

    return 0;
}
