#include <stdio.h>
#include <stdlib.h>

int main(){

    char conteudo[1000];
    int contador = 0, i = 0;
    FILE *arquivo;

    arquivo = fopen("NumerosTeste.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir!");
        exit(1);
    }

    while (fgets(conteudo, 1000, arquivo)){
        contador++;
    }

    fclose(arquivo);

    arquivo = fopen("NumerosTeste.txt", "r");

    int numeros[contador];

     while (fgets(conteudo, 1000, arquivo)){
        contador++;
        fscanf(arquivo, "%d", &numeros[i]);
        i++;
    }

    for (i = 0; i < contador; i++){
        printf("%d", numeros[i]);
    }




    return 0;
}
