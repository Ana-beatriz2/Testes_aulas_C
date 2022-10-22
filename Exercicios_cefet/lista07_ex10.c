#include <stdio.h>
#include <string.h>

int main(){

    char string[101], string_sem_espaco[101], inverso[101];
    int i, cont = 0, tamanho;

    printf("Insira uma frase/palavra (em minusculas): ");
    gets(string);


    for (i = 0; i < strlen(string); i++){
        if (string[i] != ' '){
            string_sem_espaco[cont] = string[i];
            cont++;
        }
    }

    tamanho = strlen(string_sem_espaco);
    cont = 0;

    for (i = tamanho - 1; i >= 0; i--){
        inverso[cont] = string_sem_espaco[i];
        cont++;
    }

    if (strcmp(string_sem_espaco, inverso) == 0){
        printf("E palindromo.");
    }
    else{
        printf("Nao e palindromo.");
    }

    return 0;
}
