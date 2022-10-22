#include <stdio.h>
#include <string.h>

int main(){

    char nome[31];
    int i;

    printf("Insira um nome: ");
    gets(nome);

    for (i = 0; i < 4 && nome[i] != '\0'; i++){
        printf("%c", nome[i]);
    }

    return 0;
}
