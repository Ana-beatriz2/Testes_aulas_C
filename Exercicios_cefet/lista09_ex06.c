#include <stdio.h>
#include <stdlib.h>


float ler_notas(){

    int i;
    float notas[3], soma = 0, media;
    char opcao;

    for (i = 0; i < 3; i++){
        printf("\nInsira a %da nota: ", i+1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    setbuf(stdin, NULL);

    printf("\nInsira qual resultado deseja obter:\nA - Media Aritimetica.\nB - Media ponderada.\nC - Media harmonica.\nSua opcao: ");
    scanf("%c%*C", &opcao);

    switch(opcao){
        case 'a':
        case 'A':

            printf("\nMedia Aritmetica: ");

            media = soma/3;

            break;
        case 'b':
        case 'B':
            printf("\nMedia Ponderada: ");

            media = ((notas[0] * 5) + (notas[1] * 3) + (notas[2] * 2)) / 10;

            break;

        case 'c':
        case 'C':
            printf("\nMedia Harmonica: ");

            media = 3 / (1/notas[0] + 1/notas[1] + 1/ notas[2]);

            break;
        default:
            printf("Opcao invalida!");

    }

    return media;
}

int main(){

    float media;

    media = ler_notas();

    printf("%f\n", media);

    return 0;

}
