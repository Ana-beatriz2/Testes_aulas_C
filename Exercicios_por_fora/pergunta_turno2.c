#include <stdio.h>

/*Faça um Programa que pergunte em que turno você estuda. Peça para
digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a
mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor
Inválido!", conforme o caso. */


int main(){

    char turno;

    printf("Em que turno voce estuda?\n");
    printf("\nM - Matutino\nV - Vespertino\nN - Noturno\n");
    printf("\nSua opcao: ");
    scanf("%c%*C", &turno);

    switch(turno) {

        case 'm':
        case 'M':
            printf("\nBom dia!");
            break;

        case 'v':
        case 'V':
            printf("\nBoa tarde!");
            break;

        case 'n':
        case 'N':
            printf("\nBoa noite!");
            break;

        default:
            printf("\nopcao invalida!");
            break;

    }


    return 0;
}
