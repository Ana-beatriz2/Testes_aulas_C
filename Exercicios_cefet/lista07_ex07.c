#include <stdio.h>
#include <string.h>

int main(){

    char palavra[51], numero_ascii;
    int i, tamanho;

    printf("Insira uma palavra: ");
    gets(palavra);

    tamanho = strlen(palavra);

    while (tamanho > 50){
        printf("Quantidade maxima de caracteres atingida! Por favor, insira outra palavra: ");
        gets(palavra);

        tamanho = strlen(palavra);
    }

    printf("\nPalavra com o valor do caractere na tabela ASCII alterado: ");

    for (i = 0; i < tamanho; i++){
            numero_ascii = palavra[i];
            numero_ascii = numero_ascii + 1;
            printf("%c", numero_ascii);
    }

    printf("\n");

    return 0;
}
