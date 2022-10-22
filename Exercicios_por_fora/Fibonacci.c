#include <stdio.h>

/*.A s�rie de Fibonacci � formada pela seq��ncia
0,1,1,2,3,5,8,13,21,34,55,... Fa�a um programa que gere a s�rie at�
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
