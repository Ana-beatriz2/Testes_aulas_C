#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char titulo[21], string[21], info[51];
    int idade, resultado;

    FILE *arquivo;

    printf("Insira o titulo do arquivo: ");
    gets(titulo);

    strcat(titulo, ".txt");

    strcpy(info, "Mare");

    arquivo = fopen(titulo, "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    resultado = fputs(info, arquivo);

    if (resultado == EOF){
        printf("Erro ao gravar a string!");
        exit(1);
    }

    printf("String gravada com sucesso!");

    fclose(arquivo);

    arquivo = fopen(titulo, "r");

    fscanf(arquivo, "%s", &string);

    printf("%s", string);

    fclose(arquivo);

    return 0;
}
