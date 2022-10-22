#include <stdio.h>


int main(){

    int contador;
    float numero, maior, menor;


    for (contador = 0; contador < 15; contador++) {

        printf("Insira o %do numero: ", contador + 1);
        scanf("%f", &numero);

        if (contador == 0){
            maior = numero;
            menor = numero;
        }
        else{
            if (numero < menor){
                menor = numero;
            }
            if (numero > maior){
                maior = numero;
            }
        }

    }

    printf("\nMaior valor inserido: %.1f\nMenor valor inserido: %.1f\n", maior, menor);

    return 0;

}
