#include <stdio.h>

/* Fa�a um Programa que verifique se uma letra digitada � "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo
Inv�lido. */


int main() {

    char sexo;

    do{

        printf("Insira seu sexo (F/M): ");
        scanf(" %c", &sexo);

    } while (sexo != 'F' && sexo != 'M');

    printf("Sexo '%c' registrado com sucesso!", sexo);


    return 0;
}
