#include <stdio.h>
#include <locale.h>

// Quest�o 3

int main() {

    setlocale(LC_ALL, "Portuguese");

    int ano, ano_atual;

    printf("\n========================================\n");
    printf("\n    Verificador de ano bissexto     \n");
    printf("\n========================================\n");

    printf("\nInsira o ano que deseja analisar: ");
    scanf("%d", &ano);

    printf("Insira o ano atual: ");
    scanf("%d", &ano_atual);


    if (((ano % 4 == 0) && ((ano % 100 != 0)) || ((ano % 400 == 0)))) {

            if (ano > ano_atual) {

                printf("\n%d ser� um ano bissexto.\n", ano);
            }

            else if (ano < ano_atual) {

                printf("\n%d foi um ano bissexto.\n", ano);
            }

            else {

               printf("\n%d � bissexto.\n", ano);
            }

    }

    else {

        if (ano > ano_atual) {

                printf("\n%d n�o ser� um ano bissexto.\n", ano);
            }

        else if (ano < ano_atual) {

                printf("\n%d n�o foi um ano bissexto.\n", ano);
            }

        else {

               printf("\n%d n�o � bissexto.\n", ano);
            }

    }

    return 0;
}
