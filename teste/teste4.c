#include <stdio.h>

int main(){

    int vetor1[5], vetor2[5], interseccao[5], i, j, k, cont = 0, achei = 0;

    printf("\nCom relacao ao primeiro vetor: \n");

    for (i = 0; i < 5; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nCom relacao ao segundo vetor: \n");

    for (i = 0; i < 5; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (vetor1[i] == vetor2[j]){
                if (i == 0){
                    interseccao[cont] = vetor1[i];
                    cont++;
                }
                else{
                    for (k = 0; k < cont; k++){
                        if (vetor1[i] == interseccao[k]){
                            achei = 1;
                        }
                    }

                    if (achei == 0){
                        interseccao[cont] = vetor1[1];
                    }

                    achei = 0;
                }
            }
        }
    }

    for (i = 0; i < cont; i++){
        printf(" %d ", interseccao[i]);
    }

    return 0;
}
