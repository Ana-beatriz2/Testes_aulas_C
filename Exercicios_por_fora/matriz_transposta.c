#include <stdio.h>

int main(){

    int matriz[3][3], nova_matriz[3][3], i , j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Insira um valor para a posicao (%d, %d) da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }


    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            nova_matriz[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz original: \n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf(" |%d| ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta: \n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf(" |%d| ", nova_matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}
