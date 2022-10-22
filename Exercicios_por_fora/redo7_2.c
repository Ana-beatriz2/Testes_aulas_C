#include <stdio.h>
#include <string.h>


int main(){

    char nome1[31], nome2[31];
    int i;

    printf("Insira o primeiro nome: ");
    gets(nome1);

    printf("Insira o segundo nome: ");
    gets(nome2);


    if (strlen(nome1) != strlen(nome2)){
        printf("\nSao diferentes!\n");
        return 0;
    }

    for (i = 0; i < strlen(nome1); i++){
        if (nome1[i] != nome2[i]){
            printf("\nSao diferentes!\n");
            return 0;
        }
    }

    printf("\nSao iguais!\n");

    return 0;
}
