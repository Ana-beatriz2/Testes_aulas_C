#include <stdio.h>
#include <string.h>

int main(){

    int numero = 10;
    int *ponteiro;

    ponteiro = &numero;

    printf("%d", ponteiro);


    return 0;
}
