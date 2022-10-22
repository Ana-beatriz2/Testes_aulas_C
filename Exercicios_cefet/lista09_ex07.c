#include <stdio.h>



int verifica_par(int numero){

    if (numero % 2 == 0){
        return 1;
    }

    return 0;
}

int main(){

    int numero;

    printf("Insira um valor: ");
    scanf("%d", &numero);

    printf("%d", verifica_par(numero));
}
