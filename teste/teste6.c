#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char nome[51], sobrenome[51], primeiro_nome[51];
    int cont = 0, i, cont2 = 0, indice = 0;

    printf("Insira seu nome completo: ");
    gets(nome);

    for (i = 0; i < strlen(nome); i++){
        if (nome[i] ==  ' '){
            cont++;
        }
    }

    for (i = 0; i < strlen(nome); i++){

        if (nome[i] ==  ' '){
            cont2++;
        }

        if (cont2 == cont && nome[i] != ' '){
            sobrenome[indice] = nome[i];
            indice++;
        }
        else{
           primeiro_nome[i] = nome[i];
        }

    }

    printf("\n%s, %s\n", sobrenome, primeiro_nome);

    return 0;
}
