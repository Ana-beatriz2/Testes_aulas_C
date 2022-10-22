#include <stdio.h>

int main(){

    int vetor[10], numeros_impares[10], i, contador = 0;

    for (i = 0; i < 10; i++){
        printf("\nInsira um valor para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 1){
            numeros_impares[contador] = vetor[i];
            contador++;
        }
    }

    printf("\nNumeros impares inseridos: ");

    for (i = 0; i < contador; i++){
        printf("%d ", numeros_impares[i]);
    }

    return 0;
}
