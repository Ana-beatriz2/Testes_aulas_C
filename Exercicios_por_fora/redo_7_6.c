#include <stdio.h>
#include <string.h>

int main(){

    char frase[101], frase_final[101];
    int i, cont = 0, j = 0;

    printf("Insira uma frase: ");
    gets(frase);

    for (i = 0; i < strlen(frase); i++){
        if (frase[i] == ' '){
            cont++;
        }
        else{
            frase_final[j] = frase[i];
            j++;
        }
    }

    printf("\nNumero de espacos encontrados: %d", cont);
    printf("\nFrase final: %s", frase_final);

    return 0;
}
