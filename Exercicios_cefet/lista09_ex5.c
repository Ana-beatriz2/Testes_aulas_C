#include <stdio.h>

int soma_divisores(int numero){

    int i, soma = 0;

    for (i = 1; i < numero; i++){
        if (numero % i == 0){
            soma += i;
        }
    }

    return soma;
}

int ler_numero(){
    int numero;

    printf("Insira um valor positivo: ");
    scanf("%d", &numero);

    while (numero < 0){
        printf("Erro! Por favor, insira um numero positivo: ");
        scanf("%d", &numero);
    }

    return numero;
}

int main(){

    int numero, i;

    for (i = 0; i < 5; i++){

        printf("\n======================================\nNUMERO %d\n======================================\n", i+1);

        numero = ler_numero();

        printf("\nA soma dos divisores do numero %d e igual a %d.\n", numero, soma_divisores(numero));

    }

    return 0;
}
