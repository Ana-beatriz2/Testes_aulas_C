#include <stdio.h>
#include <locale.h>

/* Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a ´
soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponder ´ a o valor ´
8 (2 + 5 + 1). Se o numero lido n ´ ao for maior do que zero, o programa terminar ˜ a com a ´
mensagem “Numero inv ´ alido”.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero, soma = 0, quantidade_digitos, contador;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("\nSoma entre os algarismos do número %d: ", numero);

    if (numero > 0) {


            while (numero > 0) {

                soma += numero % 10;

                numero = numero / 10;

    }

    }

    else {

        printf("Número inválido!");

    }

    printf("%d\n", soma);

    return 0;

}
