#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, media;

    printf("Insira o primeiro número: ");
    scanf("%f", &numero1);

    printf("Insira o segundo número: ");
    scanf("%f", &numero2);

    printf("Insira o terceiro número: ");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("\nMédia entre os números inseridos: %.2f\n", media);

    return 0;

}
