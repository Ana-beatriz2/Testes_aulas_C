#include <stdio.h>
#include <string.h>

int main(){

    char string[51], caractere, vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int i, j, cont_vogais = 0, tamanho, achei = 0;

    printf("Insira uma string: ");
    gets(string);

    printf("Insria um caractere para substituir as vogais: ");
    scanf("%c", &caractere);

    tamanho = strlen(string);

    printf("\nString sem as vogais: ");

    for (i = 0; i < tamanho; i++){
            for (j = 0; j < 5; j++){
                if (string[i] == vogais[j]){
                    cont_vogais++;
                    string[i] = caractere;
                    achei = 1;
                }
            }

            if (achei == 0){
                printf("%c", string[i]);
            }

            achei = 0;
    }

    printf("\nQuantidade de vogais: %d", cont_vogais);
    printf("\nString alterada: %s\n", string);

    return  0;
}
