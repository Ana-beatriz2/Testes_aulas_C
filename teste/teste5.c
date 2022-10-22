#include <stdio.h>
#include <string.h>

int main(){

    char palavra[51], vogais[] = {'a', 'e', 'i', 'o', 'u'}, palavra_sem_vogais[51], caractere  = '4';
    int i, j, cont_vogais = 0, tamanho, cont = 0, achei = 0;

    printf("Insira uma palavra: ");
    gets(palavra);

    tamanho = strlen(palavra);


    for (i = 0; i < tamanho; i++){
        for (j = 0; j < 5; j++){
            if (palavra[i] == vogais[j]){
                cont_vogais++;
                achei = 1;
            }
        }

         if (achei == 0){
                palavra_sem_vogais[cont] = palavra[i];
                cont++;
        }

        achei = 0;
    }

    for (i = 0; i < tamanho; i++){
        for (j = 0; j < 5; j++){
            if (palavra[i] == vogais[j]){
                   printf("%c", caractere);
                   j = 5;
                   achei = 1;
            }
        }

        if (achei != 1){
            printf("%c", palavra[i]);
        }

        achei = 0;
    }


    printf("\nO numero de vogais presentes na palavra e igual a: %d", cont_vogais);

    for (i = 0; i < strlen(palavra_sem_vogais); i++){
        printf("%c", palavra_sem_vogais[i]);
    }

    return 0;
}
