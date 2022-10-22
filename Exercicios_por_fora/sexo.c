#include <stdio.h>

/* Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo
Inválido. */


int main() {

    char sexo;

    do{

        printf("Insira seu sexo (F/M): ");
        scanf(" %c", &sexo);

    } while (sexo != 'F' && sexo != 'M');

    printf("Sexo '%c' registrado com sucesso!", sexo);


    return 0;
}
