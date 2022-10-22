#include <stdio.h>

int main(){

    int numeros[10], i, k;

    for (i = 0; i < 10; i++){
        printf("Insira o %do valor: ", i + 1);
        scanf("%d", &numeros[i]);

        for (k = 0; k < i; k++){
            while (numeros[i] == numeros[k]){
                printf("Numero ja inserido! Por favor, digite novamente: ");
                scanf("%d", &numeros[i]);

                k = 0;
            }
        }

    }

    printf("\nNumeros inseridos: ");

    for (i = 0; i < 10; i++){
        printf(" %d ", numeros[i]);
    }


    return 0;
}
