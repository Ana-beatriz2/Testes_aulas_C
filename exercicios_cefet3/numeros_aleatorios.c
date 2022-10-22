#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, quantidade;
    FILE *ArqNumeros;

    ArqNumeros = fopen("NumerosTeste.txt", "w");

    if (ArqNumeros ==  NULL){
        printf("Erro ao criar o arquivo!");
        exit(1);
    }

    srand(time(NULL));

    printf("Insira a quantidade de numeros a serem gerados: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++){
        fprintf(ArqNumeros, "%d\n", rand() % 101);
    }

    fclose(ArqNumeros);

    return 0;

}
