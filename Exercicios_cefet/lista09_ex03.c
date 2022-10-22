#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){

    int i, resultado = base;

    if (expoente == 0){
        return 1;
    }
    else if (expoente < 0){
        exit(1);
    }

    for (i = 1; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}

int main(){

    printf("%d", potencia(3, 3));

    return 0;
}
