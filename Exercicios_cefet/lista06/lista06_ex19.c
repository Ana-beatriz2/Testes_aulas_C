#include <stdio.h>

int main(){

    int cartela[5][5], i, j, k, m;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Insira um valor para a posicao (%d, %d) da cartela: ", i+1, j+1);
            scanf("%d", &cartela[i][j]);

            while (cartela[i][j] < 0 || cartela[i][j] > 99){
                printf("Erro! Por favor, insira um numero valido: ");
                scanf("%d", &cartela[i][j]);
            }

            if (j > 0){
                if (i > 0){
                    for (k = 0; k <= i; k++){
                        for (m = 0; m <= j; m++){
                                while (cartela[i][j] == cartela[k][m]){
                                    printf("\na%d, %d\n", cartela[i][j], cartela[i][m]);
                                    printf("Valor repetido! Por favor, insira um novo numero: ");
                                    scanf("%d", &cartela[i][j]);

                                    k = 0;
                                    m = 0;
                                }
                        }
                    }
                }
                else{
                   for (m = 0; m < j; m++){
                            while (cartela[i][j] == cartela[i][m]){
                                printf("\nb%d, %d\n", cartela[i][j], cartela[i][m]);
                                printf("Valor repetido! Por favor, insira um novo numero: ");
                                scanf("%d", &cartela[i][j]);

                                m = 0;
                            }
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
