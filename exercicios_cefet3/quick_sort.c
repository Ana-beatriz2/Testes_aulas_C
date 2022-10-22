#include <stdio.h>
#include <stdlib.h>

void imprimir(int vetor[], int tamanho){

    int i;

    for (i = 0; i < tamanho; i++){
        printf(" %d ", vetor[tamanho]);
    }
}

void Quick(int vetor[], int inicio, int fim){

   int pivo, aux, i, j, meio;

   i = inicio;
   j = fim;

   meio = (i + j) / 2;
   pivo = vetor[meio];

   do{
      while (vetor[i] < pivo){
            i++;
      }
      while (vetor[j] > pivo){
            j--;
      }

      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(j > i);

   if(inicio < j){
        Quick(vetor, inicio, j);
   }
   if(i < fim) {
        Quick(vetor, i, fim);
    }

}

int main(){

    char conteudo[1000];
    int contador = 0, i = 0, cont = 0;
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

    Quick(numeros, 0, contador);

    for (i = 0; i < contador; i++){
        printf(" %d ", numeros[i]);
    }

    return 0;
}
