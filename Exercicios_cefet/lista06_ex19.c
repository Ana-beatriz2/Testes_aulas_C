#include <stdio.h>

int main(){

    int cartela[5][5], i, j, k, m, achei = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Insira um valor para a posicao (%d, %d) da cartela: ", i+1, j+1);
            scanf("%d", &cartela[i][j]);

            while (cartela[i][j] < 0 || cartela[i][j] > 99){
                printf("Erro! Por favor, insira um numero valido: ");
                scanf("%d", &cartela[i][j]);
            }


            for (k = 0; k < i; k++){
                for (m = 0; m < j; m++){
                    if (cartela[i][j] == cartela[k][m]){
                        achei = 1;
                    }

                if (achei == 1){
                    printf("Numero repetido! Por favor, insira outro valor: ");
                    scanf("%d", &cartela[i][j]);

                    k = 0;
                    m = 0;
                    achei = 0;
                }

                }
            }
        }
    }


    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("   %d   ", cartela[i][j]);
        }
        printf("\n");
    }


    return 0;
}
