#include <stdio.h>

int main(){

    int idade, nova_idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    nova_idade = idade + 1;

    printf("Daqui a um ano voce tera %d anos", nova_idade);
}
