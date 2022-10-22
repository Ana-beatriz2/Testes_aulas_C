#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2;
    char operador;

    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);

    printf("Insira o sinal da operacao que deseja realizar: ");
    scanf(" %c", &operador);

    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    printf("\n%.1f %c %.1f = ", num1, operador, num2);

    switch (operador) {

        case '+':

            printf("%.1f", num1 + num2);

            break;

        case '-':

            printf("%.1f", num1 - num2);

            break;

        case '/':

            printf("%.1f", num1 / num2);

            break;

        case 'x':

            printf("%.1f", num1 * num2);

            break;

        default:

            printf("Operador invalido.");

            break;
    }

    return 0;

}
