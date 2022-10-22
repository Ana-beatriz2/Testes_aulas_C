#include <stdio.h>

int main(){

    int vetorA[10], vetorB[10], vetorU[20], i, k, achei = 0, cont = 0;

    printf("\nCom relacao ao vetor A: \n");

    for (i = 0; i < 10; i++){
        printf("Insira um valor para a %da posicao: ", i+1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nCom relacao ao vetor B: \n");

    for (i = 0; i < 10; i++){
        printf("Insira um valor para a %da posicao: ", i+1);
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < 10; i++){
        if (i == 0){
            vetorU[cont] = vetorA[i];
            cont++;
        }
        else{
            for (k = 0; k < cont; k++){
                if (vetorA[i] == vetorU[k]){
                    achei = 1;
                }
            }

            if (achei == 0){
                vetorU[cont] = vetorA[i];
                cont++;
            }

            achei = 0;

        }
    }

    for (i = 0; i < 10; i++){
        for (k = 0; k < cont; k++){
            if (vetorB[i] == vetorU[k]){
                achei = 1;
            }
        }

        if (achei == 0){
            vetorU[cont] = vetorB[i];
            cont++;
        }

        achei = 0;
    }

    for (i = 0; i < cont; i++){
        printf(" %d ", vetorU[i]);
    }

    return 0;
}
