#include <stdio.h>


int retorna_menor(int a, int b){

    if (a < b){
        return a;
    }
    else{
        return b;
    }

}

int main(){

    int num_a, num_b;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num_a);

    printf("Insira o segundo numero: ");
    scanf("%d", &num_b);

    printf("\nMenor numero inserido: %d\n", retorna_menor(num_a, num_b));

    return 0;
}
