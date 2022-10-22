#include <stdio.h>
#include <string.h>

int main(){

    char palavra[51], valor_ascii;
    int tamanho, i;

    printf("Insira uma palavra [max 50 caracteres]: ");
    gets(palavra);

    tamanho = strlen(palavra);

    while (tamanho > 50){
        printf("Erro! A palavra ultrapassou o limite de caracteres permitido. Tente novamente: ");
        gets(palavra);

        tamanho = strlen(palavra);
    }

    for (i = 0; i < tamanho; i++){
        valor_ascii = palavra[i];
        printf("%c", valor_ascii + 1);
    }


    return 0;
}
