#include <stdio.h>

/*Faça um programa que peça dois números, base e expoente, calcule e
mostre o primeiro número elevado ao segundo número. Não utilize a
função de potência da linguagem.*/


int main(){

    int base, expoente, contador;
    long int resultado = 1;

    printf("Insira a base: ");
    scanf("%d", &base);

    printf("Insira o expoente: ");
    scanf("%d", &expoente);


    for (contador = 0; contador < expoente; contador++) {

        resultado = resultado * base;

    }

    printf("%d ^ %d = %ld", base, expoente, resultado);

    return 0;

}
