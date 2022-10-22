#include <stdio.h>
#include <string.h>

int main(){

    char nome[21];
    int resultado;
    int *resultado2;
    FILE *name;

    printf("Insira um nome: ");
    gets(nome);

    name = fopen("name.txt", "w");

    if (name == NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    resultado = fputs(nome, name);

    if (resultado == EOF){
        printf("Erro na gravacao!\n");
        exit(1);
    }

    fclose(name);

    name = fopen("name.txt", "r");

    resultado2 = fgets(nome, (strlen(nome) + 1), name);

    if (resultado2 == NULL){
        printf("Erro na leitura!\n");
        exit(1);
    }

    printf("%s", nome);

    fclose(name);

    return 0;
}
