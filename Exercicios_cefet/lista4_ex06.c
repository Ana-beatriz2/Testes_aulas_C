#include <stdio.h>

int main(){

    int matriz[3][3], i, j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Insira um valor para a posicao (%d, %d) da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("  |  %d  |  ", matriz[i][j]);
        }
        printf("\n");
    }


    printf("Diagonal principal de tras para frente: ");

    for (i = 2; i >= 0; i--){
        printf(" %d ", matriz[i][i]);
    }

    printf("\n");

    return 0;
}
