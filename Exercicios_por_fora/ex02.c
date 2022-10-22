#include <stdio.h>
#include <locale.h>

/* Fac¸a um programa que leia 2 notas de um aluno, verifique se as notas sao v ˜ alidas e ´
exiba na tela a media destas notas. Uma nota v ´ alida deve ser, obrigatoriamente, um ´
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor v ˜ alido, este fato deve ser ´
informado ao usuario e o programa termina.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float nota, soma;
    int contador = 0;

    while (contador < 2) {

        printf("Insira a %d° nota: ", contador+1);
        scanf("%f", &nota);

        while ((nota > 10) || (nota < 0)) {

            printf("\nNota inválida!\n");

            printf("\nInsira a %d° nota novamente: ", contador+1);
            scanf("%f", &nota);

        }

        soma += nota;
        contador += 1;

        }


    printf("\nMédia do aluno: %.1f\n", soma / 2);

    return 0;
}
