#include <stdio.h>

int absoluto(int numero){

    if (numero >= 0){
        return numero;
    }

    numero = numero * (-1);

    return numero;
}

int main(){

    int numeros[5][2], i, j = 0;


    for (i = 0; i < 5; i++){

        printf("Insira o %do valor: ", i+1);
        scanf("%d", &numeros[i][j]);

        numeros[i][j+1] = absoluto(numeros[i][j]);
    }

    printf("\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 2; j++){

            if (j == 0){
               printf("Numero inserido: %d. ", numeros[i][j]);
            }
            else{
                printf("Seu valor absoluto: %d. ", numeros[i][j]);
            }
        }

        printf("\n");
    }


    return 0;
}
