#include <stdio.h>

int main(){

    float vetor[5], matriz[5][5];
    int i, j;

    for (i = 0; i < 5; i++){
        printf("Insira um valor real para a posicao %d do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }

    printf("\n")
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Insira um valor para a posicao (%d, %d) da matriz: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz com seus valores originais:\n");

     for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf(" |%8.2f| , matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz com seus valores alterados:\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matriz[j][i] *= vetor[j];
        }
    }

    printf("\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf(" |%8.2f| ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
