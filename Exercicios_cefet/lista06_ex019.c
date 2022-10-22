#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matriz[5][5], i, j, k, m, numero, achei = 0, cont = 0;

    srand(time(NULL));

    for (i = 0; i < 5;){
        for (j = 0; j < 5;){

            numero = rand() % 100;

            if (cont > 0){
                for (k = 0; k < i; k++){
                    for (m = 0; m < j; m++){
                        printf(" \n%d | %d\n", numero, matriz[k][m]);
                        if (numero == matriz[k][m]){
                            achei = 1;
                        }
                    }
                }


                printf("\n");

                if (achei != 1){
                    matriz[i][j] = numero;

                    if (j == 4){
                        i++;
                        j = 0;
                    }
                    else{
                        j++;
                    }
                }
            }
            else{
                printf("\nprimeiro numero: %d \n", numero);
                matriz[i][j] = numero;

                j++;
            }

            achei = 0;
            cont++;
        }
    }

    printf("\nCARTELA GERADA:\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf(" |%d| ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
