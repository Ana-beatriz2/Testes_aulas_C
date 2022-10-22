#include <stdio.h>
#include <string.h>

int main(){

    char string[101], alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, k;

    printf("Insira uma frase: ");
    gets(string);

    for (i = 0; i < strlen(string); i++){
        for (k = 0; k < 26; k++){
            if (string[i] == alfabeto[k]){
                string[i] = alfabeto[k+3];
                k = 25;
            }
        }
    }

    printf("\nFrase codificada: ");
    printf("\n%s\n", string);

    return 0;
}
