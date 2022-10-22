#include <stdio.h>
#include <string.h>

int main(){

    char frase[81], frase_sem_espaco[81];
    int i, cont_espaco = 0, indice = 0;

    printf("Insira um frase: ");
    gets(frase);

    for (i = 0; i < strlen(frase); i++){
        if (frase[i] ==  ' '){
            cont_espaco++;
        }
        else{
            frase_sem_espaco[indice] = frase[i];
            indice++;
        }
    }

    printf("\n");

    printf("%s\n", frase_sem_espaco);

    return 0;
}
