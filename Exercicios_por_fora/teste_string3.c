#include <stdio.h>
#include <string.h>

int main(){

    char nome[31];
    int tamanho;

    printf("Insira um nome de ate 30 caracteres: ");
    gets(nome);

    //scanf("%s", &nome);

    for (tamanho = 0; tamanho < 31 && nome[tamanho] != '\0'; tamanho++);

    printf("\n%d\n", tamanho);

    while (tamanho >= 31){
        printf("Erro! O nome inserido ultrapassou o limite de caracteres. Insira novamente: ");
        gets(nome);

        for (tamanho = 0; tamanho < 31 && nome[tamanho] != '\0'; tamanho++);
    }

    printf("%s%*S", nome);

    return 0;
}
