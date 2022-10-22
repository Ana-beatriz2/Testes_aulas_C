//Faça um programa que lê um vetorde númerosreaisde 5elementos e
//uma matriz de 5x 5elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.

#include <stdio.h>

int main(){

    int vetor[5], matriz[5][5], i, j;

    printf("\nCom relacao ao vetor: \n");

    for (i = 0; i < 5; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nCom relacao a matriz: \n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Insira um valor para a posicao (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matriz[j][i] *= vetor[j];
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
          printf("   %d   ", matriz[i][j]);
        }
        printf("\n");
    }







}
