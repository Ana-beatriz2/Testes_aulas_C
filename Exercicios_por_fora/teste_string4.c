#include <stdio.h>
#include <string.h>

int main(){

    char nome[21];
    int tamanho;

    printf("Nome: ");
    gets(nome);

    for (tamanho = 0; nome[tamanho] != '\0'; tamanho++);

    while (tamanho > 21){

        printf("%d", tamanho);

        printf("Muito grande. Nome: ");
        gets(nome);

        for (tamanho = 0; nome[tamanho] != '\0'; tamanho++);
    }

    printf("%s", nome);

    return 0;
}
