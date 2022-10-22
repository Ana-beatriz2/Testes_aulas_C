#include <stdio.h>

int main(){

    int vetorA[10], vetorB[10], vetorC[20], i, cont = 0;

    printf("\nCom relacao ao vetor A: \n");

    for (i = 0; i < 10; i++){
        printf("Insira um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetorA[i]);

        vetorC[cont] = vetorA[i];
        cont += 2;
    }

    printf("\nCom relacao ao vetor B: \n");

    cont = 1;

    for (i = 0; i < 10; i++){
        printf("Insira um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetorB[i]);

        vetorC[cont] = vetorB[i];
        cont += 2;
    }

    printf("\n");

     for (i = 0; i < 20; i++){
        printf(" %d ", vetorC[i]);
    }


    return 0;
}
