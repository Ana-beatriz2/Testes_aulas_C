#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, media;

    printf("Insira o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("Insira o segundo n�mero: ");
    scanf("%f", &numero2);

    printf("Insira o terceiro n�mero: ");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("\nM�dia entre os n�meros inseridos: %.2f\n", media);

    return 0;

}
