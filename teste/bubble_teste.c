#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int lista[10], quantidade = 10, i, aux, h;

    srand(time(NULL));

    for (i = 0; i < 10; i++){
        lista[i] = rand() % 100;
    }

    for (i = 0; i < 10; i++){
        printf(" %d ", lista[i]);
    }

    printf("\n");

    quantidade--;

    for (h = 0; h < 10; h++){

        for (i = 0; i < quantidade; i++){
            if (lista[i] > lista[i+1]){
                aux = lista[i+1];
                lista[i+1] = lista[i];
                lista[i] = aux;
            }
        }

        quantidade--;
    }


    for (i = 0; i < 10; i++){
        printf(" %d ", lista[i]);
    }


    return 0;
}
