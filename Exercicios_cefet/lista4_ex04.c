#include <stdio.h>

int main(){

    int matriculas[10], i = 0, j;

    while (i < 10){

        printf("Insira o %do numero da matricula: ", i+1);
        scanf("%d", &matriculas[i]);

        if (i > 0){

            for (j = 0; j < i; j++){

                while (matriculas[i] == matriculas[j]){
                    printf("Numero repetido! Por favor, insira um novo numero de matricula: ");
                    scanf("%d", &matriculas[i]);

                    j = 0;
                }
            }
        }

        i++;
    }

    printf("\nNumeros de matriculas inseridos:\n");
    for (i = 0; i < 10; i++){
        printf(" %d ", matriculas[i]);
    }

    return 0;
}
