#include <stdio.h>

int main(){

    int vetor[5], quantidade_maior = 0, quantidade_menor = 0, quantidade_igual = 0, i;

    for (i = 0; i < 5; i++){
        printf("Insira um valor para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (i > 0){
            if (vetor[i] > vetor[0]){
                quantidade_maior++;
            }
            else if (vetor[i] < vetor[0]){
                quantidade_menor++;
            }
            else {
                quantidade_igual++;
            }
        }
    }

    printf("\n================================================\nCom relacao ao primeiro elemento inserido (%d): \n================================================\n", vetor[0]);
    printf("\nQuantidade de valores maiores: %d\nQuantidade de valores menores: %d\nQuantidade de valroes iguais: %d", quantidade_maior, quantidade_menor, quantidade_igual);


    return 0;
}
