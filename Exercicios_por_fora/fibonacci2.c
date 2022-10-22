#include <stdio.h>

/*A série de Fibonacci é formada pela seqüência
1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série
até o n−ésimo termo.*/


int main(){

    int numero1, numero2, numero3, contador;

    numero1 = 0;
    numero2 = 1;

    printf("%d %d ", numero1, numero2);

    for (contador = 2; contador < 9; contador++){

        numero3 = numero1 + numero2;

        printf(" %d ", numero3);

        numero1 = numero2;
        numero2 = numero3;

    }


    return 0;

}
