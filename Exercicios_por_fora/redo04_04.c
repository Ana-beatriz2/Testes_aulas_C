#include <stdio.h>

int main(){

    int matriculas[5], i, j;


    for (i = 0; i < 5; i++){
        printf("Insira a %da matricula: ", i+1);
        scanf("%d", &matriculas[i]);

        if (i > 0){
            for (j = 0; j < i; j++){
                while (matriculas[i] == matriculas[j]){
                    printf("Matricula ja cadastrada! Por favor, insira novamente: ");
                    scanf("%d", &matriculas[i]);

                    j = 0;
                }
            }
        }

    }

    printf("\nMatriculas cadastradas:\n");

    for (i = 0; i < 5; i++){
        printf("\n%d ", matriculas[i]);
    }


    return 0;
}
