#include <stdio.h>

// Questão 4


int main() {

    int opcao;
    float raio, area_circunferencia, perimetro_circunferencia;

    printf("Informe a operacao que deseja realizar: \n");
    printf("\n1- Calcular a area da circunferencia\n2- Calcular a o perimetro da circunferencia\n");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    printf("\nInforme o raio da circunferencia (m): ");
    scanf("%f", &raio);


    switch (opcao) {

        case 1:
            area_circunferencia = (raio * raio) * 3.14;

            printf("\nArea da circunferencia: %.2fm2\n", area_circunferencia);

            break;

        case 2:
            perimetro_circunferencia = 2 * 3.14 * raio;

            printf("\nPerimento da circunferencia: %.2fm\n", perimetro_circunferencia);

            break;

        default:
            printf("\nOpcao invalida.\n");

            break;

    }

    return 0;
}
