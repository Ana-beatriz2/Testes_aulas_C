#include <stdio.h>

/* Fa�a um Programa para um caixa eletr�nico. O programa dever�
perguntar ao usu�rio a valor do saque e depois informar quantas
notas de cada valor ser�o fornecidas. As notas dispon�veis ser�o as
de 1, 5, 10, 50 e 100 reais. O valor m�nimo � de 10 reais e o
m�ximo de 600 reais. O programa n�o deve se preocupar com a
quantidade de notas existentes na m�quina.
� Exemplo 1: Para sacar a quantia de 256 reais, o programa
fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma
nota de 1;
� Exemplo 2: Para sacar a quantia de 399 reais, o programa
fornece tr�s notas de 100, uma nota de 50, quatro notas de 10,
uma nota de 5 e quatro notas de 1. */

int main() {

    int valor_saque = 0, quantidade[5] = {0, 0, 0, 0, 0}, notas[5] = {100, 50, 10, 5, 1}, contador, indice = 0;

    printf("VALOR MINIMO DE SAQUE: R$10,00.\nVALOR MAXIMO: R$600,00.\n");

    while (valor_saque > 600 || valor_saque < 10) {

        printf("\nInforme o valor do saque: R$");
        scanf("%d", &valor_saque);
    }


    while (valor_saque > 0) {

        while (valor_saque >= notas[indice]) {

            valor_saque -= notas[indice];
            quantidade[indice] += 1;

        }

        indice++;

    }


    for (contador = 0; contador < 5; contador++){

        if (quantidade[contador] != 0) {

            printf("\nNotas de R$%d: %d\n", notas[contador], quantidade[contador]);

        }


    }

    return 0;

}
