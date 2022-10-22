#include <stdio.h>
#include <string.h>

int main(){

    char palavra[101], codigo_ascii;
    int i;

    printf("Insira uma palavra: ");
    gets(palavra);

    printf("\nPalavra em maiusculas: ");

    for (i = 0; i < strlen(palavra); i++){
        codigo_ascii = palavra[i];
        if (codigo_ascii >= 97 && codigo_ascii <= 122){
            codigo_ascii -= 32;
            printf("%c", codigo_ascii);
        }
        else{
            printf("%c", palavra[i]);
        }
    }

    printf("\n");

    return 0;
}
