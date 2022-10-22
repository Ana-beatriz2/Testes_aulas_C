#include <stdio.h>
#include <stdlib.h>


int main(){

    int i;
    char caractere;

    FILE *arquivo;

    printf("Insira um caracatere (0 para parar): ");
    scanf("%c%*C", &caractere);

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    fclose(arquivo);

    while (caractere != '0'){

        arquivo = fopen("arq.txt", "a");

        if (arquivo == NULL){
            printf("Erro ao abrir o arquivo!");
            exit(1);
        }

        fprintf(arquivo, " %c ", caractere);

        printf("Caractere gravado!");

        fclose(arquivo);

        printf("Insira um caracatere (0 para parar): ");
        scanf("%c%*C", &caractere);
    }

    return 0;
}
