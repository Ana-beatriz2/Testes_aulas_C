#include <stdio.h>
#include <string.h>

int main(){

    char palavra[51], valor_ascii;
    int i, tamanho;

    printf("Insira uma palavra (max de 50 letras): ");
    gets(palavra);

    tamanho = strlen(palavra);

    while (tamanho > 50){
        printf("O numero maximo de letras foi atingido. Por favor, insira novamente: ");
        gets(palavra);

        tamanho = strlen(palavra);
    }

    printf("\nNova palavra: ");

    for (i = 0; i < tamanho; i++){
        valor_ascii = palavra[i];

        printf("%c", valor_ascii+1);
    }

    return 0;
}
