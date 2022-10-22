#include <stdio.h>
#include <string.h>

int main(){

    char nome[30];
    int tamanho;

    printf("Insira um nome: ");
    scanf("%s%*C", &nome);

    tamanho = strlen(nome);

    printf("%d", tamanho);

}
