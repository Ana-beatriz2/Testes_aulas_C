#include <stdio.h>

int main(){

    int i;
    char palavra1[] = {'p', 'a', 'o', ' '}, palavra2[] = {'m', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a'}, novaPalavra[13];


    for (i = 0; i < 4; i++){
        novaPalavra[i] = palavra1[i];
    }

    for (i = 0; i < 9; i++){
        novaPalavra[i+4] = palavra2[i];
    }

    for (i = 0; i < 13; i++){
        printf("%c", novaPalavra[i]);
    }


    return 0;
}
