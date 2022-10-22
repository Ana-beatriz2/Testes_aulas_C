#include <stdio.h>
#include <string.h>

int main(){

    char palavra[31], vogais[] = {'a', 'e', 'i', 'o', 'u'}, caractere;
    int i, j, cont = 0;

    printf("Insira uma palavra: ");
    gets(palavra);

    printf("Insira um caractere para substituir as voagais: ");
    scanf("%c%*C", &caractere);

    for (i = 0; i < strlen(palavra); i++){
        for (j = 0; j < 5; j++){
            if (palavra[i] == vogais[j]){
                palavra[i] = caractere;
                cont++;
            }
        }
    }

    printf("Numero de vogais encontradas na palavra: %d", cont);
    printf("\nPalavra alterada: %s\n", palavra);




    return 0;
}
