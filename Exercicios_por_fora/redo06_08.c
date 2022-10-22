#include <stdio.h>

int main(){

    int vetorA[10], vetorB[10], vetorC[10], i, j, k, cont = 0, achei = 0;

    printf("\nCom relacao ao vetor A: \n");

    for (i = 0; i < 10; i++){
        printf("Insira um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nCom relacao ao vetor B: \n");


    for (i = 0; i < 10; i++){
        printf("Insira um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (vetorA[i] == vetorB[j]){
                for (k = 0; k < cont; k++){
                    if (vetorA[i] == vetorC[k]){
                        achei = 1;
                    }
                }

                if (achei == 0){
                    vetorC[cont] = vetorA[i];
                    cont++;
                }

                achei = 0;
            }

            }

        }

    printf("\nValores pertencentes a ambos vetores: \n");

    for (i = 0; i < cont; i++){
        printf(" %d ", vetorC[i]);
    }

    return 0;

}
