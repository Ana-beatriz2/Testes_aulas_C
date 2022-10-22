#include <stdio.h>
#include <string.h>

int main(){

    int i, tamanho;
    char nome1[31], nome2[31];

    printf("Insira o primeiro nome a ser comparado:  ");
    gets(nome1);

    printf("Insira o segundo nome a ser comparado:  ");
    gets(nome2);

    tamanho = strlen(nome1);

    if (tamanho != strlen(nome2)){
        printf("Os nomes sao diferentes!\n");
        return 0;
    }

    for(i = 0; i < tamanho; i++){
        if (nome1[i] != nome2[i]){
            printf("Os nomes sao diferentes!\n");
            return 0;
        }
    }

    printf("Os nomes sao iguais!\n");

    return 0;
}
