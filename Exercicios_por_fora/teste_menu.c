#include <stdio.h>

int main(){

    char sexo;

    printf("Insira seu sexo (F/M): ");
    scanf("%c", &sexo);

    if (sexo == 'f' || sexo == 'F'){
        printf("E menina.");
    }
    else{
        printf("E menino.");
    }



    return 0;
}
