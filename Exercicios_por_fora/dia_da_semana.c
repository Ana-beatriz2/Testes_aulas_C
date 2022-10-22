#include <stdio.h>

/*Faça um Programa que leia um número e exiba o dia correspondente da
semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve
aparecer valor inválido. */

int main() {

    int numero;

    printf("Insira um numero entre 1 e 7: ");
    scanf("%d", &numero);

    printf("\nO numero %d corresponde a ", numero);

    switch(numero){

        case 1: printf("domingo.\n"); break;

        case 2: printf("segunda.\n"); break;

        case 3: printf("terca.\n"); break;

        case 4: printf("quarta.\n");break;

        case 5: printf("quinta.\n"); break;

        case 6: printf("sexta.\n"); break;

        case 7: printf("sabado.\n"); break;

        default: printf("Opcao invalida!"); break;

    }


    return 0;

}
