#include <stdio.h>

int verifica_inteiro(int numero){
    if (numero > 0){
        return 1;
    }
    else if (numero == 0){
        return 0;
    }
    else{
        return -1;
    }
}

int main(){

    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    printf("%d", verifica_inteiro(numero));

    return 0;
}
