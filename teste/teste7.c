#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int potencia(int base, int expoente){

    int i, produto = 1;

    for (i = 0; i < expoente; i++){
        produto *= base;
    }

    return produto;

}

int main(){

    printf("%d", potencia(9, 2));

    return 0;
}
