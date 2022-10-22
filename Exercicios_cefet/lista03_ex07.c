#include <stdio.h>

// Questão 7

int main () {

    int numero, quantidade_digitos = 0, soma, digito;

    printf("Insira um numero para obter seu digito verificador: ");
    scanf("%d", &numero);

    printf("Numero com o digito verificador: %d-", numero);


    do {

        soma = 0;

        while (numero >= 1) {

            digito = numero % 10;

            soma += digito;

            numero = numero / 10;

        }


        numero = soma;


    } while (soma >= 10);


   printf("%d\n",soma);

    return 0;
}
