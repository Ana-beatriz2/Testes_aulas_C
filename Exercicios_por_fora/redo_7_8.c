#include <stdio.h>
#include <string.h>

int main(){

    char palavra[101], valor_ascii;
    int i;

    printf("Insira uma palavra/frase: ");
    gets(palavra);

    for (i = 0; i < strlen(palavra); i++){
        valor_ascii = palavra[i];
        if (valor_ascii >= 97 && valor_ascii <= 122){
            valor_ascii -= 32;
            printf("%c", valor_ascii);
        }
        else{
            printf("%c", valor_ascii);
        }
    }

    return 0;
}
