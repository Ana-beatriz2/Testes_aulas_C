#include <stdio.h>

/*Faça um programa que calcule o fatorial de um número inteiro
fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120*/

int main(){

    int numero, contador;
    long int fatorial = 1;

    printf("Insira um numero para calcular seu fatorial: ");
    scanf("%d", &numero);

    printf("\n%d! = ", numero);

    while (numero >= 1) {

        fatorial *= numero;

        printf("%d", numero);

        numero--;

        if (numero == 0){
                printf(" = ");
        }
        else {printf(" x ");}

    }

    printf("%ld\n", fatorial);

    return 0;

}
