#include <stdio.h>

/*Fa�a um programa que pe�a dois n�meros, base e expoente, calcule e
mostre o primeiro n�mero elevado ao segundo n�mero. N�o utilize a
fun��o de pot�ncia da linguagem.*/


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
