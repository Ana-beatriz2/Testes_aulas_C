#include <stdio.h>

/*.A série de Fibonacci é formada pela seqüência
0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até
que o valor seja maior que 500.*/

int main() {

    int numero1, numero2, numero3;

    numero1 = 0;
    numero2 = 1;

    printf("%d %d", numero1, numero2);

    while (numero3 <= 500) {

        numero3 = numero1 + numero2;

        printf(" %d ", numero3);

        numero1 = numero2;
        numero2 = numero3;

    }


    return 0;

}
