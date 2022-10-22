#include <stdio.h>
#include <string.h>

int main(){

    char string[101], alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, j;

    printf("Insira uma string: ");
    gets(string);

    for (i = 0; i < strlen(string); i++){
        for(j = 0; j < 26; j++){
            if (string[i] == alfabeto[j]){
                string[i] = alfabeto[j+3];
                j = 25;
            }
        }
    }

    printf("\n");

    printf("%s", string);

    return 0;
}
