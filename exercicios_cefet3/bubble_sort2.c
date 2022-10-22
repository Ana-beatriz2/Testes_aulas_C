#include <stdio.h>
#include <stdlib.h>

void imprimir(int vet[], int quantidade){

    int i;

    for (i = 0; i < quantidade; i++){
        printf(" %d ", vet[i]);
    }
}


int main(){

    char conteudo[1000];
    int contador = 0, i = 0, h, cont = 0, aux, cont2;
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

    cont2 = contador;
    contador--;
    for (h = 0; h < cont2; h++){
        for (i = 0; i < contador; i++){

            if (numeros[i] > numeros[i+1]){
                aux = numeros[i+1];
                numeros[i+1] = numeros[i];
                numeros[i] = aux;
            }
        }

        contador--;
    }

    imprimir(numeros, cont2);

    return 0;
}
