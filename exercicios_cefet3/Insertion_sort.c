#include <stdio.h>
#include <stdlib.h>

int main(){

     char conteudo[1000];
    int contador = 0, i = 0, aux, indice;
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

    fscanf(arquivo, "%d", &numeros[i]);

     while (fgets(conteudo, 1000, arquivo)){
        i++;
        fscanf(arquivo, "%d", &numeros[i]);
    }

    fclose(arquivo);

    // Ordenação

    i = 0;

    while (i < contador){

        indice = i - 1;

        while (indice >= 0 && numeros[indice] > numeros[indice + 1]){

            aux = numeros[indice + 1];
            numeros[indice + 1] = numeros[indice]; numeros[indice] = aux;

            indice--;
        }

        i++;

    }

    for (i = 0; i < contador; i++){
        printf(" %d ", numeros[i]);
    }






    return 0;
}
