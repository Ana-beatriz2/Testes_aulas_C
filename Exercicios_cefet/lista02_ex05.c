#include <stdio.h>

// Questão 5

int main() {

    int opcao;
    float lado, base, altura, area_trapezio, base_maior, base_menor;

    printf("Qual conta deseja efetuar? \n");
    printf("\n1- Area de um quadrado\n2- Area de um retangulo\n3- Area de um trapezio\n");
    printf("\nSua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:

            printf("\nInsira o valor do lado (m): ");
            scanf("%f", &lado);

            printf("\nArea do quadrado: %.1fm2\n", lado * lado);

            break;

        case 2:

            printf("\nInsira o valor da base (m): ");
            scanf("%f", &base);

            printf("\nInsira o valor da altura (m): ");
            scanf("%f", &altura);

            printf("\nArea do retangulo: %.1fm2\n", base * altura);

            break;

        case 3:

            printf("\nInsira o valor da base maior (m): ");
            scanf("%f", &base_maior);

            printf("Insira o valor da base menor (m): ");
            scanf("%f", &base_menor);

            printf("Insira o valor da altura (m): \n");
            scanf("%f", &altura);

            area_trapezio = ((base_maior + base_menor) / 2) * altura;

            printf("\nArea do trapezio: %.1fm2\n", area_trapezio);

            break;

        default:

            printf("\nOpcao invalida!\n");

            break;

    }

    return 0;

}

