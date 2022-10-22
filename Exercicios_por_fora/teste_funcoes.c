#include <stdio.h>

void imprimaMensagem(int a){

    printf("%d", a*a);

}

int main(){

    int numero;

    printf("Insira um valor para obter seu quadrado: ");
    scanf("%d", &numero);

    imprimaMensagem(numero);

    return 0;
}
