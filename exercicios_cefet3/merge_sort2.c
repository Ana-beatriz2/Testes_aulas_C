#include <stdio.h>
#include <stdlib.h>

int main() {

   char conteudo[1000];
    int contador = 0, i = 0, h, cont = 0, aux, cont2;
    void sort(int primeiro, int ultimo, int vetor[], int quantidade);
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

    sort(0, contador, numeros, contador);

   for(i = 0; i <= contador; i++)
      printf("%d ", numeros[i]);
}


void merging(int primeiro, int meio, int ultimo, int vetor[], int quantidade) {
   int l1, l2, i, b[quantidade];

   for(l1 = primeiro, l2 = meio + 1, i = primeiro; l1 <= meio && l2 <= ultimo; i++) {
      if(vetor[l1] <= vetor[l2])
         b[i] = vetor[l1++];
      else
         b[i] = vetor[l2++];
   }

   while(l1 <= meio)
      b[i++] = vetor[l1++];

   while(l2 <= ultimo)
      b[i++] = vetor[l2++];

   for(i = primeiro; i <= ultimo; i++)
      vetor[i] = b[i];
}

void sort(int primeiro, int ultimo, int vetor[], int quantidade) {
   int meio;

   if(primeiro < ultimo) {
      meio = (primeiro + ultimo) / 2;
      sort(primeiro, meio, vetor, quantidade);
      sort(meio+1, ultimo, vetor, quantidade);
      merging(primeiro, meio, ultimo, vetor, quantidade);
   }
   else {
      return;
   }
}

