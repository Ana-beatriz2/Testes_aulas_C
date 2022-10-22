#include <stdio.h>
#include <string.h>

int main(){

    char palavra[31], palavra_inverso[31], palavra_sem_espaco[31];
    int i, cont = 0;

    printf("Insira a palavra: ");
    gets(palavra);

    for (i = 0; i < strlen(palavra); i++){
        if (palavra[i] !=  ' '){
            palavra_sem_espaco[cont] = palavra[i];
            cont++;
        }
    }

    cont = 0;

    for (i = (strlen(palavra) - 1); i >= 0; i++){
        palavra_sem_espaco[cont] = palavra[i];
        cont++;
    }

    printf("%s", palavra_inverso);


    return 0;
}
